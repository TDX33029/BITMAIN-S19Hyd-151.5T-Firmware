// FUN_01854658 @ 01854658 size=352 calls_out=8 calls_in=2
// strings: 

void FUN_01854658(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_168;
  int local_164;
  int local_160;
  int local_c8;
  int local_c4;
  undefined1 auStack_c0 [104];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  if (*param_1 == 0) {
    iVar2 = param_1[1];
    iVar4 = param_1[2];
    param_1[1] = 0;
    if (iVar2 != 1) {
      puVar1 = &DAT_01d1f100;
      goto LAB_018547b4;
    }
    FUN_01bed4e2(&local_c8,param_2,0xa0);
    FUN_0188d91c(&local_168,iVar4,&local_c8);
    if (local_168 != 5 || local_164 != 0) {
      FUN_01852698(&local_168);
    }
  }
  else {
    iVar4 = param_1[2];
    iVar2 = param_1[1];
    param_1[1] = 0;
    if (iVar2 == 0) {
      puVar1 = &DAT_01d1f110;
LAB_018547b4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(puVar1);
    }
    iVar2 = *param_2;
    iVar3 = param_2[1];
    if (iVar2 == 4 && iVar3 == 0) {
      FUN_01bed4e2(&local_168,param_2 + 2,0x68);
    }
    else {
      local_c8 = iVar2;
      local_c4 = iVar3;
      FUN_01bed4e2(auStack_c0,param_2 + 2,0x68);
      local_58 = param_2[0x1c];
      iStack_54 = param_2[0x1d];
      iStack_50 = param_2[0x1e];
      iStack_4c = param_2[0x1f];
      iStack_48 = param_2[0x20];
      iStack_44 = param_2[0x21];
      local_40 = param_2[0x22];
      iStack_3c = param_2[0x23];
      iStack_38 = param_2[0x24];
      iStack_34 = param_2[0x25];
      local_160 = param_2[0x26];
      iStack_2c = param_2[0x27];
      local_30 = local_160;
      if (iVar2 != 3 || iVar3 != 0) {
        FUN_01852704(&local_c8);
      }
      local_164 = 0;
      local_168 = 3;
    }
    FUN_0188d794(&local_c8,iVar4,&local_168);
    if (local_c8 != 4 || local_c4 != 0) {
      FUN_0185255c(&local_c8);
    }
  }
  FUN_018520fc(param_1);
  return;
}

