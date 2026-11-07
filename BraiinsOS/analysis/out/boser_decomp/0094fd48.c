// FUN_0094fd48 @ 0094fd48 size=416 calls_out=8 calls_in=1
// strings: 

void FUN_0094fd48(int *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *unaff_r6;
  undefined1 *unaff_r7;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  char local_2c;
  undefined1 local_2b;
  undefined1 *local_28;
  
  if (param_2[1] == 0) {
    *param_1 = -0x7fffffff;
    return;
  }
  uVar4 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_0094f574(&local_40,uVar4);
  if ((char)local_40 == '\x01') {
    puVar3 = local_3c;
  }
  else {
    uVar2 = (uint)local_40 >> 8 & 0xff;
    if (uVar2 == 0) {
      local_40 = (undefined1 *)0x80000000;
      local_38 = unaff_r7;
LAB_0094fdd4:
      *param_1 = (int)local_40;
      param_1[1] = (int)unaff_r6;
      param_1[2] = (int)local_38;
      return;
    }
    if (uVar2 == 1) {
      FUN_009c98e8(&local_40,uVar4);
      if (local_40 == (undefined1 *)0x1) {
        uVar6 = CONCAT44(local_3c,1);
      }
      else {
        uVar6 = FUN_00736cb4(local_38,local_34);
      }
      puVar3 = (undefined1 *)(uVar6 >> 0x20);
      if ((uVar6 & 1) == 0) {
        puVar5 = puVar3;
        if (0xfffffffffffff < uVar6) {
          puVar5 = (undefined1 *)0x100000;
        }
        if (puVar3 == (undefined1 *)0x0) {
          unaff_r6 = (undefined1 *)0x1;
          puVar5 = (undefined1 *)0x0;
        }
        else {
          unaff_r6 = (undefined1 *)FUN_01298504(puVar5,1);
          if (unaff_r6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,puVar5);
          }
        }
        local_38 = (undefined1 *)0x0;
        local_40 = puVar5;
        local_3c = unaff_r6;
        while (puVar5 = local_38, puVar3 != local_38) {
          FUN_0094f574(&local_2c,uVar4);
          uVar1 = local_2b;
          if (local_2c != '\0') {
            FUN_019bb7e0(local_40,unaff_r6);
            puVar3 = local_28;
            goto LAB_0094fecc;
          }
          if (puVar5 == local_40) {
            FUN_006666a0(&local_40);
            unaff_r6 = local_3c;
          }
          unaff_r6[(int)puVar5] = uVar1;
          local_38 = puVar5 + 1;
        }
        puVar3 = unaff_r6;
        if (-0x7fffffff < (int)local_40) goto LAB_0094fdd4;
      }
    }
    else {
      local_40 = &DAT_80000004;
      local_3c = (undefined1 *)uVar2;
      puVar3 = (undefined1 *)FUN_0073696c(&local_40);
    }
  }
LAB_0094fecc:
  *param_1 = -0x7ffffffe;
  param_1[1] = (int)puVar3;
  return;
}

