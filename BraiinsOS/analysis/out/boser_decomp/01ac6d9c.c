// FUN_01ac6d9c @ 01ac6d9c size=968 calls_out=0 calls_in=2
// strings: 

void FUN_01ac6d9c(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  
  if (param_2 < (undefined1 *)0x2d00) {
                    /* WARNING: Could not recover jumptable at 0x01ac6dbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_01ac6dc0 + *(int *)(&DAT_01ac6dc0 + ((uint)param_2 >> 8) * 4)))();
    return;
  }
  if ((((param_2 + -0xa640 < (undefined1 *)0x2d) || (param_2 + -0xa680 < (undefined1 *)0x1b)) ||
      (param_2 + -0xa722 < (undefined1 *)0xd)) || (param_2 + -0xa732 < (undefined1 *)0x3d))
  goto LAB_01ac6ee4;
  if (param_2 + -0xa779 < (undefined1 *)0x3) {
    puVar5 = (undefined1 *)((uint)(param_2 + 1) & 0xa77e);
    goto LAB_01ac6ee8;
  }
  puVar5 = (undefined1 *)0x1d79;
  if (param_2 == (undefined1 *)0xa77d) goto LAB_01ac6ee8;
  if (param_2 + -0xa77e < (undefined1 *)0x9) goto LAB_01ac6ee4;
  if (param_2 == (undefined1 *)0xa78b) {
    puVar5 = (undefined1 *)0xa78c;
    goto LAB_01ac6ee8;
  }
  if (param_2 == (undefined1 *)0xa78d) {
    puVar5 = (undefined1 *)0x265;
    goto LAB_01ac6ee8;
  }
  if ((param_2 + -0xa790 < (undefined1 *)0x3) || (param_2 + -0xa796 < (undefined1 *)0x13)) {
LAB_01ac6ee4:
    puVar5 = (undefined1 *)((uint)param_2 | 1);
LAB_01ac6ee8:
    if (((uint)puVar5 ^ 0xd800) - 0x110000 < 0xffef0800) {
      puVar5 = &DAT_00110000;
    }
    if (puVar5 == &DAT_00110000) {
      puVar5 = param_2;
    }
    *param_1 = 0x110001;
    param_1[1] = puVar5;
    return;
  }
  puVar5 = param_2 + -0xa7aa;
  if ((puVar5 < (undefined1 *)0xa) && ((0x3dfU >> ((uint)puVar5 & 0xff) & 1) != 0)) {
    puVar6 = &DAT_005397c8;
LAB_01ac7418:
    puVar5 = *(undefined1 **)(puVar6 + (int)puVar5 * 4);
    goto LAB_01ac6ee8;
  }
  if (param_2 + -0xa7b4 < (undefined1 *)0xf) goto LAB_01ac6ee4;
  puVar5 = param_2 + -0xa7c4;
  if (puVar5 < (undefined1 *)0x3) {
    puVar6 = &DAT_005397f0;
    goto LAB_01ac7418;
  }
  if (param_2 + -0xa7c7 < (undefined1 *)0x3) {
    puVar5 = (undefined1 *)((uint)(param_2 + 1) & 0xa7de);
    goto LAB_01ac6ee8;
  }
  if (param_2 == (undefined1 *)0xa7cb) {
    puVar5 = (undefined1 *)0x264;
    goto LAB_01ac6ee8;
  }
  if (param_2 == (undefined1 *)0xa7cc) {
    puVar5 = (undefined1 *)0xa7cd;
    goto LAB_01ac6ee8;
  }
  if (param_2 == (undefined1 *)0xa7d0) {
    puVar5 = (undefined1 *)0xa7d1;
    goto LAB_01ac6ee8;
  }
  if (param_2 + -0xa7d6 < (undefined1 *)0x5) goto LAB_01ac6ee4;
  if (param_2 == (undefined1 *)0xa7dc) {
    puVar5 = (undefined1 *)0x19b;
    goto LAB_01ac6ee8;
  }
  if (param_2 == (undefined1 *)0xa7f5) {
    puVar5 = (undefined1 *)0xa7f6;
    goto LAB_01ac6ee8;
  }
  if (param_2 + -0xab70 < (undefined1 *)0x50) {
    puVar5 = param_2 + -0x97d0;
    goto LAB_01ac6ee8;
  }
  switch(param_2) {
  case (undefined1 *)0xfb00:
    uVar1 = 0x66;
    param_1[1] = 0x66;
    *param_1 = 0x110002;
    goto LAB_01ac7538;
  case (undefined1 *)0xfb01:
    uVar1 = 0x69;
    goto LAB_01ac7c84;
  case (undefined1 *)0xfb02:
    uVar1 = 0x6c;
LAB_01ac7c84:
    uVar3 = 0x66;
    goto LAB_01ac7528;
  case (undefined1 *)0xfb03:
    uVar1 = 0x69;
    goto LAB_01ac7ca8;
  case (undefined1 *)0xfb04:
    uVar1 = 0x6c;
LAB_01ac7ca8:
    uVar3 = 0x66;
    *param_1 = 0x66;
    goto LAB_01ac7534;
  case (undefined1 *)0xfb05:
  case (undefined1 *)0xfb06:
    uVar1 = 0x74;
    uVar3 = 0x73;
    goto LAB_01ac7528;
  default:
    if ((undefined1 *)0x19 < param_2 + -0xff21) {
      if ((param_2 + -0x10400 < (undefined1 *)0x28) || (param_2 + -0x104b0 < (undefined1 *)0x24)) {
        puVar5 = param_2 + 0x28;
        goto LAB_01ac6ee8;
      }
      if (((param_2 + -0x10570 < &DAT_0000000b) ||
          (param_2 + -0x1057c < &DAT_0000000f || param_2 + -0x1058c < &DAT_00000007)) ||
         (((uint)param_2 & 0x1ffffe) == 0x10594)) {
        puVar5 = param_2 + 0x27;
        goto LAB_01ac6ee8;
      }
      if (param_2 + -0x10c80 < (undefined1 *)0x33) {
        puVar5 = (undefined1 *)((uint)param_2 | 0x40);
        goto LAB_01ac6ee8;
      }
      if ((undefined1 *)0x15 < param_2 + -0x10d50) {
        uVar4 = (uint)param_2 & 0x1fffe0;
        uVar2 = 0x118a0;
        if (uVar4 != 0x118a0) {
          uVar2 = 0x16e40;
        }
        if (uVar4 != 0x118a0 && uVar4 != uVar2) {
          puVar5 = param_2;
          if (param_2 + -0x1e900 < (undefined1 *)0x22) {
            puVar5 = param_2 + 0x22;
          }
          goto LAB_01ac6ee8;
        }
      }
    }
    puVar5 = param_2 + 0x20;
    goto LAB_01ac6ee8;
  case (undefined1 *)0xfb13:
    uVar1 = 0x576;
    break;
  case (undefined1 *)0xfb14:
    uVar1 = 0x565;
    break;
  case (undefined1 *)0xfb15:
    uVar1 = 0x56b;
    break;
  case (undefined1 *)0xfb16:
    uVar1 = 0x576;
    uVar3 = 0x57e;
    goto LAB_01ac7528;
  case (undefined1 *)0xfb17:
    uVar1 = 0x56d;
  }
  uVar3 = 0x574;
LAB_01ac7528:
  *param_1 = 0x110002;
LAB_01ac7534:
  param_1[1] = uVar3;
LAB_01ac7538:
  param_1[2] = uVar1;
  return;
}

