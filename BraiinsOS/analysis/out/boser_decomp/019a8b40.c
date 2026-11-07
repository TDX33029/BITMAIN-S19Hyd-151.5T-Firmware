// FUN_019a8b40 @ 019a8b40 size=336 calls_out=5 calls_in=3
// strings: 

void FUN_019a8b40(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_e0 [8];
  undefined4 local_d8;
  int local_d4;
  uint local_cc;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 auStack_58 [52];
  uint local_24;
  
  uVar4 = 0;
  FUN_01bed93e(auStack_e0,0,0x80);
  iVar1 = FUN_01bea604(3,param_2,auStack_e0,param_3);
  if (iVar1 == -1) {
    puVar2 = (uint *)FUN_01be3244();
    uVar3 = *puVar2;
    if (uVar3 == 10) {
      FUN_01bed93e(auStack_58,0,0x38);
      local_60 = 8;
      local_5c = 0;
      iVar1 = FUN_01be67dc(param_2,0xc040ff0b,&local_60);
      if (iVar1 != -1) {
        param_1[1] = 1;
        param_1[2] = local_24;
        goto LAB_019a8c84;
      }
      uVar3 = 10;
    }
    uVar4 = 1;
    param_1[1] = 0;
    param_1[2] = uVar3;
  }
  else {
    if (local_d4 == 0) {
      iVar1 = 4;
      local_cc = uVar4;
    }
    else {
      switch(local_d8) {
      case 1:
        local_cc = (local_cc & 0xff) << 8;
        break;
      case 2:
        break;
      case 3:
        local_cc = local_cc | 0x80;
        break;
      case 4:
      case 5:
        local_cc = (local_cc & 0xff) << 8 | 0x7f;
        break;
      case 6:
        local_cc = 0xffff;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0052651c,0xab,&DAT_01d27a88);
      }
      param_1[1] = 1;
      iVar1 = 8;
    }
    *(uint *)((int)param_1 + iVar1) = local_cc;
    uVar4 = 0;
  }
LAB_019a8c84:
  *param_1 = uVar4;
  return;
}

