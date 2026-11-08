// FUN_018e077c @ 018e077c size=460 calls_out=9 calls_in=18
// strings: chunk size must be non-zero | chunk size must be non-zero

void FUN_018e077c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r5;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined1 auStack_30 [12];
  
  if (param_3 == 0) {
    FUN_018e0168(&local_58);
    uVar2 = local_54;
    uVar5 = *(uint *)(param_1 + 0xa8);
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01d23098);
    }
    if (local_50 != 0) {
      uVar3 = local_54;
      uVar6 = local_50;
      do {
        uVar1 = uVar6;
        if (uVar5 < uVar6) {
          uVar1 = uVar5;
        }
        uVar4 = 0;
        if ((int)uVar1 < 0) {
LAB_018e0944:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar4,unaff_r5);
        }
        uVar4 = 1;
        unaff_r5 = FUN_01298504(uVar1,1);
        if (unaff_r5 == 0) {
          unaff_r5 = uVar1;
          goto LAB_018e0944;
        }
        FUN_01bed4e2(unaff_r5,uVar3,uVar1);
        local_44 = uVar1;
        local_40 = unaff_r5;
        local_3c = uVar1;
        FUN_018e0a2c(auStack_30,&local_44);
        FUN_018dff10(param_1 + 0x60,auStack_30);
        uVar6 = uVar6 - uVar1;
        uVar3 = uVar3 + uVar1;
      } while (uVar6 != 0);
    }
  }
  else {
    FUN_018e0168(&local_44);
    uVar2 = local_40;
    uVar5 = *(uint *)(param_1 + 0xa8);
    if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("chunk size must be non-zero",0x37,&DAT_01d23098);
    }
    uVar6 = local_40;
    for (uVar3 = local_3c; uVar3 != 0; uVar3 = uVar3 - uVar1) {
      uVar1 = uVar3;
      if (uVar5 < uVar3) {
        uVar1 = uVar5;
      }
      local_54 = uVar6;
      local_50 = uVar1;
      FUN_018e09a4(param_1,&local_58);
      uVar6 = uVar6 + uVar1;
    }
    local_58 = local_44;
  }
  FUN_0134bd64(local_58,uVar2);
  return;
}

