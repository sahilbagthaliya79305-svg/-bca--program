/* ================= CART DATA ================= */

let cart = JSON.parse(localStorage.getItem("boxingCart")) || [];


/* ================= ADD TO CART ================= */

function addToCart(productName, productPrice) {

    let existingProduct = cart.find(
        product => product.name === productName
    );

    if (existingProduct) {

        existingProduct.quantity++;

    } else {

        cart.push({

            name: productName,

            price: productPrice,

            quantity: 1

        });

    }

    localStorage.setItem(
        "boxingCart",
        JSON.stringify(cart)
    );

    updateCartCount();

    alert(productName + " added to cart!");

}


/* ================= UPDATE CART COUNT ================= */

function updateCartCount() {

    let cartCount = document.getElementById("cartCount");

    if (cartCount) {

        let totalQuantity = cart.reduce(

            (total, product) =>

            total + product.quantity,

            0

        );

        cartCount.innerText = totalQuantity;

    }

}


/* ================= REMOVE PRODUCT ================= */

function removeFromCart(productName) {

    cart = cart.filter(

        product => product.name !== productName

    );

    localStorage.setItem(

        "boxingCart",

        JSON.stringify(cart)

    );

    updateCartCount();

}


/* ================= CLEAR CART ================= */

function clearCart() {

    cart = [];

    localStorage.removeItem("boxingCart");

    updateCartCount();

}


/* ================= PAGE LOAD ================= */

document.addEventListener(

    "DOMContentLoaded",

    function () {

        updateCartCount();

    }

);
/* =================================================
   BOXINGPRO SHOPPING WEBSITE JAVASCRIPT
================================================= */


/* ================= CART DATA ================= */

let cart = JSON.parse(
    localStorage.getItem("boxingCart")
) || [];



/* ================= ADD TO CART ================= */

function addToCart(productName, productPrice) {


    let existingProduct = cart.find(

        product => product.name === productName

    );


    if (existingProduct) {

        existingProduct.quantity++;

    }

    else {

        cart.push({

            name: productName,

            price: productPrice,

            quantity: 1

        });

    }


    localStorage.setItem(

        "boxingCart",

        JSON.stringify(cart)

    );


    updateCartCount();


    alert(

        productName +

        " added to cart successfully!"

    );

}



/* ================= UPDATE CART COUNT ================= */

function updateCartCount() {


    let cartCount = document.getElementById(

        "cartCount"

    );


    if (cartCount) {


        let totalQuantity = cart.reduce(

            (total, product) =>

            total + product.quantity,

            0

        );


        cartCount.innerText = totalQuantity;

    }

}



/* ================= REMOVE FROM CART ================= */

function removeFromCart(productName) {


    cart = cart.filter(

        product =>

        product.name !== productName

    );


    localStorage.setItem(

        "boxingCart",

        JSON.stringify(cart)

    );


    updateCartCount();

}



/* ================= CLEAR CART ================= */

function clearCart() {


    cart = [];


    localStorage.removeItem(

        "boxingCart"

    );


    updateCartCount();

}



/* =================================================
   PRODUCT SEARCH
================================================= */

function searchProducts() {


    let searchInput = document.getElementById(

        "searchInput"

    );


    if (!searchInput) return;


    searchInput.addEventListener(

        "keyup",

        function () {


            let searchValue =

                searchInput.value.toLowerCase();


            let products = document.querySelectorAll(

                ".product-item"

            );


            let visibleProducts = 0;


            products.forEach(

                function (product) {


                    let productName =

                        product.dataset.name.toLowerCase();


                    if (

                        productName.includes(

                            searchValue

                        )

                    ) {


                        product.style.display =

                            "block";


                        visibleProducts++;

                    }

                    else {


                        product.style.display =

                            "none";

                    }

                }

            );


            showNoProductsMessage(

                visibleProducts

            );

        }

    );

}



/* =================================================
   CATEGORY FILTER
================================================= */

function filterProducts() {


    let filterButtons = document.querySelectorAll(

        ".filter-btn"

    );


    filterButtons.forEach(

        function (button) {


            button.addEventListener(

                "click",

                function () {


                    let selectedCategory =

                        button.dataset.category;


                    filterButtons.forEach(

                        btn => {

                            btn.classList.remove(

                                "active",

                                "btn-danger"

                            );

                            btn.classList.add(

                                "btn-outline-dark"

                            );

                        }

                    );


                    button.classList.remove(

                        "btn-outline-dark"

                    );


                    button.classList.add(

                        "active",

                        "btn-danger"

                    );


                    let products =

                        document.querySelectorAll(

                            ".product-item"

                        );


                    let visibleProducts = 0;


                    products.forEach(

                        function (product) {


                            let category =

                                product.dataset.category;


                            if (

                                selectedCategory ===

                                "All" ||

                                category ===

                                selectedCategory

                            ) {


                                product.style.display =

                                    "block";


                                visibleProducts++;

                            }

                            else {


                                product.style.display =

                                    "none";

                            }

                        }

                    );


                    showNoProductsMessage(

                        visibleProducts

                    );

                }

            );

        }

    );

}



/* =================================================
   SORT PRODUCTS
================================================= */

function sortProducts() {


    let sortSelect = document.getElementById(

        "sortSelect"

    );


    if (!sortSelect) return;


    sortSelect.addEventListener(

        "change",

        function () {


            let productContainer =

                document.getElementById(

                    "productContainer"

                );


            let products = Array.from(

                document.querySelectorAll(

                    ".product-item"

                )

            );


            let selectedSort =

                sortSelect.value;


            if (

                selectedSort === "low"

            ) {


                products.sort(

                    (a, b) =>

                    Number(a.dataset.price) -

                    Number(b.dataset.price)

                );

            }


            else if (

                selectedSort === "high"

            ) {


                products.sort(

                    (a, b) =>

                    Number(b.dataset.price) -

                    Number(a.dataset.price)

                );

            }


            else if (

                selectedSort === "name"

            ) {


                products.sort(

                    (a, b) =>

                    a.dataset.name.localeCompare(

                        b.dataset.name

                    )

                );

            }


            products.forEach(

                product =>

                productContainer.appendChild(

                    product

                )

            );

        }

    );

}



/* =================================================
   NO PRODUCT MESSAGE
================================================= */

function showNoProductsMessage(

    visibleProducts

) {


    let noProducts = document.getElementById(

        "noProducts"

    );


    if (!noProducts) return;


    if (visibleProducts === 0) {


        noProducts.classList.remove(

            "d-none"

        );

    }

    else {


        noProducts.classList.add(

            "d-none"

        );

    }

}



/* ================= PAGE LOAD ================= */

document.addEventListener(

    "DOMContentLoaded",

    function () {


        updateCartCount();


        searchProducts();


        filterProducts();


        sortProducts();

    }

);
/* =================================================
   PRODUCT DETAILS PAGE
================================================= */


/* ================= CHANGE PRODUCT IMAGE ================= */

function changeProductImage(imageSource) {


    let mainImage = document.getElementById(

        "mainProductImage"

    );


    if (mainImage) {

        mainImage.src = imageSource;

    }


    let thumbnails = document.querySelectorAll(

        ".product-thumbnail"

    );


    thumbnails.forEach(

        function (thumbnail) {

            thumbnail.classList.remove(

                "active-thumbnail"

            );

        }

    );


    event.target.classList.add(

        "active-thumbnail"

    );

}



/* ================= QUANTITY ================= */

let productQuantity = 1;



function increaseQuantity() {


    productQuantity++;


    let quantityElement = document.getElementById(

        "productQuantity"

    );


    if (quantityElement) {

        quantityElement.innerText =

            productQuantity;

    }

}



function decreaseQuantity() {


    if (productQuantity > 1) {


        productQuantity--;


        let quantityElement = document.getElementById(

            "productQuantity"

        );


        if (quantityElement) {

            quantityElement.innerText =

                productQuantity;

        }

    }

}



/* ================= ADD PRODUCT TO CART ================= */

function addProductToCart() {


    let productName =

        "Professional Boxing Gloves";


    let productPrice = 1499;


    let existingProduct = cart.find(

        product =>

        product.name === productName

    );


    if (existingProduct) {


        existingProduct.quantity +=

            productQuantity;

    }

    else {


        cart.push({

            name: productName,

            price: productPrice,

            quantity: productQuantity

        });

    }


    localStorage.setItem(

        "boxingCart",

        JSON.stringify(cart)

    );


    updateCartCount();


    alert(

        productQuantity +

        " product added to cart!"

    );

}



/* ================= BUY NOW ================= */

function buyNow() {


    addProductToCart();


    window.location.href =

        "cart.html";

}



/* ================= SIZE SELECTION ================= */

document.addEventListener(

    "DOMContentLoaded",

    function () {


        let sizeButtons = document.querySelectorAll(

            ".size-btn"

        );


        sizeButtons.forEach(

            function (button) {


                button.addEventListener(

                    "click",

                    function () {


                        sizeButtons.forEach(

                            btn =>

                            btn.classList.remove(

                                "active-size"

                            )

                        );


                        button.classList.add(

                            "active-size"

                        );

                    }

                );

            }

        );

    }

);
/* =================================================
   SHOPPING CART PAGE
================================================= */


/* ================= CART PRODUCT IMAGES ================= */

const productImages = {

    "Professional Boxing Gloves":
        "https://images.unsplash.com/photo-1549719386-74dfcbf7dbed?auto=format&fit=crop&w=800&q=80",

    "Training Boxing Gloves":
        "https://images.unsplash.com/photo-1583473848882-f9a5bc7fd2ee?auto=format&fit=crop&w=800&q=80",

    "Heavy Duty Punching Bag":
        "https://images.unsplash.com/photo-1584735175097-719d848f8449?auto=format&fit=crop&w=800&q=80",

    "Speed Punching Bag":
        "https://images.unsplash.com/photo-1599058917212-d750089bc07e?auto=format&fit=crop&w=800&q=80",

    "Professional Boxing Shoes":
        "https://images.unsplash.com/photo-1552074284-5e88ef1aef18?auto=format&fit=crop&w=800&q=80",

    "Boxing Head Guard":
        "https://images.unsplash.com/photo-1579952363873-27f3bade9f55?auto=format&fit=crop&w=800&q=80",

    "Premium Boxing Hand Wraps":
        "https://images.unsplash.com/photo-1599058917765-a780eda07a3e?auto=format&fit=crop&w=800&q=80"

};



/* ================= DISPLAY CART ================= */

function displayCart() {


    let cartItems = document.getElementById(

        "cartItems"

    );


    let cartContent = document.getElementById(

        "cartContent"

    );


    let emptyCart = document.getElementById(

        "emptyCart"

    );


    if (!cartItems) return;


    if (cart.length === 0) {


        cartContent.classList.add(

            "d-none"

        );


        emptyCart.classList.remove(

            "d-none"

        );


        return;

    }


    cartContent.classList.remove(

        "d-none"

    );


    emptyCart.classList.add(

        "d-none"

    );


    cartItems.innerHTML = "";


    cart.forEach(

        function (product, index) {


            let image = productImages[

                product.name

            ] || "https://via.placeholder.com/150";


            let productTotal =

                product.price *

                product.quantity;


            cartItems.innerHTML += `


                <div class="cart-item">


                    <img

                        src="${image}"

                        class="cart-item-image"

                        alt="${product.name}"

                    >


                    <div class="cart-item-details">


                        <h5>

                            ${product.name}

                        </h5>


                        <div class="cart-item-price">

                            ₹${product.price.toLocaleString()}

                        </div>


                        <div class="cart-quantity mt-3">


                            <button

                                onclick="decreaseCartQuantity(${index})">

                                <i class="fa-solid fa-minus"></i>

                            </button>


                            <span>

                                ${product.quantity}

                            </span>


                            <button

                                onclick="increaseCartQuantity(${index})">

                                <i class="fa-solid fa-plus"></i>

                            </button>


                        </div>

                    </div>


                    <div class="text-end">


                        <h5>

                            ₹${productTotal.toLocaleString()}

                        </h5>


                        <button

                            class="remove-cart-item"

                            onclick="removeCartProduct(${index})">


                            <i class="fa-solid fa-trash"></i>


                        </button>

                    </div>


                </div>

            `;

        }

    );


    calculateCartTotal();

}



/* ================= INCREASE CART QUANTITY ================= */

function increaseCartQuantity(index) {


    cart[index].quantity++;


    saveCartAndRefresh();

}



/* ================= DECREASE CART QUANTITY ================= */

function decreaseCartQuantity(index) {


    if (cart[index].quantity > 1) {


        cart[index].quantity--;

    }

    else {


        cart.splice(index, 1);

    }


    saveCartAndRefresh();

}



/* ================= REMOVE CART PRODUCT ================= */

function removeCartProduct(index) {


    cart.splice(index, 1);


    saveCartAndRefresh();

}



/* ================= CLEAR SHOPPING CART ================= */

function clearShoppingCart() {


    if (cart.length === 0) {


        return;

    }


    let confirmDelete = confirm(

        "Are you sure you want to clear your cart?"

    );


    if (confirmDelete) {


        cart = [];


        saveCartAndRefresh();

    }

}



/* ================= SAVE CART ================= */

function saveCartAndRefresh() {


    localStorage.setItem(

        "boxingCart",

        JSON.stringify(cart)

    );


    updateCartCount();


    displayCart();

}



/* ================= CALCULATE TOTAL ================= */

function calculateCartTotal() {


    let subtotal = 0;


    cart.forEach(

        function (product) {


            subtotal +=

                product.price *

                product.quantity;

        }

    );


    let discount = 0;


    if (subtotal >= 3000) {


        discount =

            Math.round(

                subtotal * 0.10

            );

    }


    let shipping = 0;


    if (subtotal > 0 && subtotal < 999) {


        shipping = 99;

    }


    let total =

        subtotal -

        discount +

        shipping;


    let subtotalElement = document.getElementById(

        "subtotal"

    );


    let discountElement = document.getElementById(

        "discount"

    );


    let shippingElement = document.getElementById(

        "shipping"

    );


    let totalElement = document.getElementById(

        "totalAmount"

    );


    if (subtotalElement) {


        subtotalElement.innerText =

            "₹" +

            subtotal.toLocaleString();

    }


    if (discountElement) {


        discountElement.innerText =

            discount.toLocaleString();

    }


    if (shippingElement) {


        shippingElement.innerText =

            shipping === 0

                ? "FREE"

                : "₹" +

                    shipping.toLocaleString();

    }


    if (totalElement) {


        totalElement.innerText =

            "₹" +

            total.toLocaleString();

    }

}



/* ================= CHECKOUT ================= */

function checkoutOrder() {


    if (cart.length === 0) {


        alert(

            "Your cart is empty!"

        );


        return;

    }


    alert(

        "Checkout feature coming soon!"

    );

}



/* ================= PAGE LOAD ================= */

document.addEventListener(

    "DOMContentLoaded",

    function () {


        updateCartCount();


        displayCart();

    }

);
/* =================================================
   CONTACT FORM VALIDATION
================================================= */


let contactForm = document.getElementById(

    "contactForm"

);


if (contactForm) {


    contactForm.addEventListener(

        "submit",

        function (event) {


            event.preventDefault();


            let fullName = document.getElementById(

                "fullName"

            ).value.trim();


            let email = document.getElementById(

                "email"

            ).value.trim();


            let phone = document.getElementById(

                "phone"

            ).value.trim();


            let subject = document.getElementById(

                "subject"

            ).value.trim();


            let message = document.getElementById(

                "message"

            ).value.trim();



            let isValid = true;



            // CLEAR PREVIOUS ERRORS

            document.getElementById(

                "nameError"

            ).innerText = "";


            document.getElementById(

                "emailError"

            ).innerText = "";


            document.getElementById(

                "phoneError"

            ).innerText = "";


            document.getElementById(

                "subjectError"

            ).innerText = "";


            document.getElementById(

                "messageError"

            ).innerText = "";



            // NAME VALIDATION

            if (fullName === "") {


                document.getElementById(

                    "nameError"

                ).innerText =

                    "Please enter your full name.";


                isValid = false;

            }



            // EMAIL VALIDATION

            let emailPattern =

                /^[^\s@]+@[^\s@]+\.[^\s@]+$/;


            if (email === "") {


                document.getElementById(

                    "emailError"

                ).innerText =

                    "Please enter your email.";


                isValid = false;

            }


            else if (

                !emailPattern.test(email)

            ) {


                document.getElementById(

                    "emailError"

                ).innerText =

                    "Please enter a valid email.";


                isValid = false;

            }



            // PHONE VALIDATION

            let phonePattern =

                /^[0-9]{10}$/;


            if (phone === "") {


                document.getElementById(

                    "phoneError"

                ).innerText =

                    "Please enter your phone number.";


                isValid = false;

            }


            else if (

                !phonePattern.test(phone)

            ) {


                document.getElementById(

                    "phoneError"

                ).innerText =

                    "Enter a valid 10 digit phone number.";


                isValid = false;

            }



            // SUBJECT VALIDATION

            if (subject === "") {


                document.getElementById(

                    "subjectError"

                ).innerText =

                    "Please enter a subject.";


                isValid = false;

            }



            // MESSAGE VALIDATION

            if (message === "") {


                document.getElementById(

                    "messageError"

                ).innerText =

                    "Please enter your message.";


                isValid = false;

            }



            // SUCCESS MESSAGE

            if (isValid) {


                document.getElementById(

                    "successMessage"

                ).classList.remove(

                    "d-none"

                );


                document.getElementById(

                    "errorMessage"

                ).classList.add(

                    "d-none"

                );


                contactForm.reset();


                window.scrollTo({

                    top: 300,

                    behavior: "smooth"

                });

            }


            else {


                document.getElementById(

                    "errorMessage"

                ).classList.remove(

                    "d-none"

                );


                document.getElementById(

                    "successMessage"

                ).classList.add(

                    "d-none"

                );

            }

        }

    );

}