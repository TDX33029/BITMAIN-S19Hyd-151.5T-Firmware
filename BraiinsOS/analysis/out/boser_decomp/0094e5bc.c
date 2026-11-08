// FUN_0094e5bc @ 0094e5bc size=328 calls_out=7 calls_in=1
// strings: 

void FUN_0094e5bc(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  char local_2c;
  undefined1 local_2b;
  uint local_28;
  
  if (param_2[1] == 0) {
    *param_1 = 0x80000000;
  }
  else {
    uVar3 = *param_2;
    param_2[1] = param_2[1] + -1;
    FUN_009c98e8(&local_40,uVar3);
    if (local_40 == 1) {
      uVar6 = CONCAT44(local_3c,1);
    }
    else {
      uVar6 = FUN_00736cb4(local_38,local_34);
    }
    uVar5 = (uint)(uVar6 >> 0x20);
    if ((uVar6 & 1) == 0) {
      uVar4 = uVar5;
      if (0xfffffffffffff < uVar6) {
        uVar4 = 0x100000;
      }
      if (uVar5 == 0) {
        uVar2 = 1;
        uVar4 = 0;
      }
      else {
        uVar2 = FUN_01298504(uVar4,1);
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,uVar4);
        }
      }
      local_38 = 0;
      local_40 = uVar4;
      local_3c = uVar2;
      while (uVar4 = local_38, uVar5 != local_38) {
        FUN_00a4dad8(&local_2c,uVar3);
        uVar1 = local_2b;
        if (local_2c != '\0') {
          FUN_019bb7e0(local_40,local_3c);
          uVar5 = local_28;
          goto LAB_0094e6e8;
        }
        if (uVar4 == local_40) {
          FUN_00a20d54(&local_40);
          uVar2 = local_3c;
        }
        *(undefined1 *)(uVar2 + uVar4) = uVar1;
        local_38 = uVar4 + 1;
      }
      uVar5 = local_3c;
      if (local_40 != 0x80000000) {
        *param_1 = local_40;
        param_1[1] = local_3c;
        param_1[2] = local_38;
        return;
      }
    }
LAB_0094e6e8:
    *param_1 = 0x80000001;
    param_1[1] = uVar5;
  }
  return;
}

