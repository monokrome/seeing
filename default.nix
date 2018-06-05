with import <nixpkgs> {}; stdenv.mkDerivation {
  name = "seeing";
  src = ./.;

  buildInputs = [
    pkgs.godot
    pkgs.godot_headers
    pkgs.clang
  ];

  meta = {
    homepage = "https://github.com/monokrome/seeing";
    description = "Seeing is believing.";
  };
}
