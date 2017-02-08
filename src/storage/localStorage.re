external getItem : string => Js.null string = "localStorage.getItem" [@@bs.val];
external setItem : string => string => unit = "localStorage.setItem" [@@bs.val];
external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
external clear : unit => unit = "localStorage.clear" [@@bs.val];
external key : int => 'a = "localStorage.key" [@@bs.val];
let length () :int => [%bs.raw {|localStorage.length|}];
