// FUN_01353668 @ 01353668 size=104 calls_out=1 calls_in=1
// strings: zip; deflate/index.htmlcannot resolve index:authority:method:scheme:path:protocol:statusevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/client.rs:1274

void FUN_01353668(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (((byte)"g"[iVar1] == 9 || ((byte)"g"[iVar1] - 0x20 < 0x5f))) {
    iVar1 = iVar1 + 1;
    if (iVar1 == 0xd) {
      *(undefined1 *)(param_1 + 4) = 0;
      *param_1 = &PTR_FUN_01ce7108;
      param_1[1] = "g";
      param_1[2] = 0xd;
      param_1[3] = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0,0,&DAT_01d2e4bc);
}

