// FUN_0143b624 @ 0143b624 size=396 calls_out=0 calls_in=1
// strings: connection closed before message completed | invalid HTTP method parsed | invalid HTTP version parsed | http2 errorevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-0.14.31/src/proto/h1/io.rs:583 | operation was canceled | error writing a body to connection

undefined8 FUN_0143b624(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0x2a;
  pcVar1 = "connection closed before message completed";
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 0:
    uVar4 = (uint)*(byte *)(param_1 + 0x19);
    uVar3 = 5;
    if (2 < uVar4) {
      uVar3 = uVar4 - 3;
    }
    pcVar1 = "invalid HTTP method parsed";
    uVar2 = 0x1a;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3 & 0xff) {
    case 1:
      return 0x1b0047e134;
    case 2:
      return 0x310047e14f;
    case 3:
      return 0xb0047e180;
    case 4:
      return 0xc0047e18b;
    case 5:
      pcVar1 = *(char **)(&DAT_01d326f8 + uVar4 * 4);
      uVar2 = *(undefined4 *)(&DAT_00537024 + uVar4 * 4);
      break;
    case 6:
      return 0x190047e1f1;
    case 7:
      return 0x1f0047e20a;
    case 8:
      return 0x420047e229;
    }
    break;
  case 1:
    return CONCAT44(*(undefined4 *)(&DAT_00537000 + (uint)*(byte *)(param_1 + 0x19) * 4),
                    (&PTR_s_error_from_user_s_HttpBody_strea_01d326d4)[*(byte *)(param_1 + 0x19)]);
  case 3:
    return 0x2b0047e3a1;
  case 4:
    return 0x160047e3cc;
  case 5:
    return 0xe00528de7;
  case 6:
    return 0x1000567c68;
  case 7:
    return 0x170047e3e2;
  case 8:
    return 0x240047e3f9;
  case 9:
    return 0x220047e41d;
  case 10:
    return 0x1e0047e43f;
  case 0xb:
    return 0xb0047e45d;
  }
  return CONCAT44(uVar2,pcVar1);
}

