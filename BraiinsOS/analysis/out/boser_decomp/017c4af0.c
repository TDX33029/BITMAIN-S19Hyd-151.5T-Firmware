// FUN_017c4af0 @ 017c4af0 size=340 calls_out=8 calls_in=4
// strings: 

void FUN_017c4af0(int *param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_168;
  undefined4 local_164;
  int local_160;
  int local_15c;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  undefined1 auStack_b8 [112];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_1 == 0) {
    iVar2 = param_1[1];
    iVar5 = param_1[2];
    param_1[1] = 0;
    if (iVar2 != 1) {
      puVar1 = &DAT_01d1c5c4;
      goto LAB_017c4c40;
    }
    FUN_01bed4e2(&local_c8,param_2,0xa0);
    FUN_017cc880(&local_168,iVar5,&local_c8);
    if (local_160 != 5 || local_15c != 0) {
      FUN_017c36f8(&local_168);
    }
  }
  else {
    iVar5 = param_1[2];
    iVar2 = param_1[1];
    param_1[1] = 0;
    if (iVar2 == 0) {
      puVar1 = &DAT_01d1c5d4;
LAB_017c4c40:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(puVar1);
    }
    iVar2 = param_2[2];
    iVar4 = param_2[3];
    if (iVar2 == 4 && iVar4 == 0) {
      FUN_01bed4e2(&local_168,param_2 + 4,0x70);
    }
    else {
      local_c4 = param_2[1];
      iVar3 = *param_2;
      local_c8 = iVar3;
      iStack_c0 = iVar2;
      iStack_bc = iVar4;
      FUN_01bed4e2(auStack_b8,param_2 + 4,0x70);
      local_48 = param_2[0x20];
      iStack_44 = param_2[0x21];
      iStack_40 = param_2[0x22];
      iStack_3c = param_2[0x23];
      local_38 = param_2[0x24];
      iStack_34 = param_2[0x25];
      iStack_30 = param_2[0x26];
      iStack_2c = param_2[0x27];
      if (iVar2 != 3 || iVar4 != 0) {
        FUN_017c3a0c(&iStack_c0);
      }
      local_164 = 0;
      local_168 = 3;
      local_160 = iVar3;
    }
    FUN_0143c13c(&local_c8,iVar5,&local_168);
    FUN_017c376c(&local_c8);
  }
  FUN_017c34d8(param_1);
  return;
}

