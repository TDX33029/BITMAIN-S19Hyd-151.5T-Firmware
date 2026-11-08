// FUN_015e8380 @ 015e8380 size=448 calls_out=6 calls_in=1
// strings: 

undefined4 FUN_015e8380(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int local_4c;
  int local_48;
  code *local_44;
  int *local_40;
  code *local_3c;
  char *local_38;
  int local_34;
  char *local_30;
  int local_2c;
  undefined *local_28;
  
  iVar4 = *param_1;
  uVar2 = 1;
  if (((*(int *)(param_2 + 0xc) == *(int *)(iVar4 + 0xc)) &&
      (*(int *)(param_2 + 8) == *(int *)(iVar4 + 8))) &&
     (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_2 + 4),*(undefined4 *)(iVar4 + 4)),
     iVar1 == 0)) {
    uVar8 = (**(code **)(*(int *)(param_2 + 0x14) + 0x1c))(*(undefined4 *)(param_2 + 0x10));
    iVar1 = (int)uVar8;
    (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0xc))(&local_38,iVar1);
    uVar2 = 0;
    if ((local_38 == (char *)0xfd1f1978 && local_30 == (char *)0x901dc7f5) &&
        (local_34 == 0x4f0c4dfb && local_2c == -0x2ead107b)) {
      local_4c = iVar1;
      if (4 < DAT_01d51b00) {
        local_40 = &local_4c;
        local_28 = &DAT_01cfd828;
        local_2c = 0x12;
        local_34 = 0x12;
        local_44 = FUN_015e8558;
        local_3c = FUN_015de8d4;
        local_30 = "m";
        local_38 = "m";
        local_48 = iVar4;
        FUN_015fb650(&DAT_0059ec91,&local_48,5,&local_38);
      }
      pcVar5 = *(char **)(iVar1 + 0x48);
      uVar6 = 0;
      if ((int)pcVar5 < 0) {
LAB_015e84c4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,pcVar5);
      }
      iVar4 = param_1[1];
      uVar2 = 0;
      uVar7 = *(undefined4 *)(iVar1 + 0x44);
      if (pcVar5 == (char *)0x0) {
        iVar1 = 1;
        pcVar3 = (char *)0x0;
      }
      else {
        uVar6 = 1;
        iVar1 = FUN_01298504(pcVar5,1);
        pcVar3 = pcVar5;
        if (iVar1 == 0) goto LAB_015e84c4;
      }
      FUN_01bed4e2(iVar1,uVar7,pcVar5);
      local_38 = pcVar3;
      local_34 = iVar1;
      local_30 = pcVar5;
      FUN_015dcc90(iVar4,&local_38);
    }
  }
  return uVar2;
}

