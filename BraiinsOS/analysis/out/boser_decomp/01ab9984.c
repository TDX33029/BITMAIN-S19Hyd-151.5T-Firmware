// FUN_01ab9984 @ 01ab9984 size=228 calls_out=4 calls_in=4
// strings: 

void FUN_01ab9984(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar2 = (uint *)FUN_01ac2710(param_2 + 0xc);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *puVar2;
    if (0x7ffffffe < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2ee44);
    }
    uVar8 = puVar2[2];
    *puVar2 = uVar3 + 1;
    iVar6 = puVar2[3] << 4;
    iVar4 = uVar8 + puVar2[3] * 0x10;
    do {
      if (iVar6 == 0) goto LAB_01ab9a48;
      pcVar1 = (char *)(iVar4 + -8);
      iVar6 = iVar6 + -0x10;
      iVar4 = iVar4 + -0x10;
    } while (*pcVar1 != '\0');
    FUN_01ab440c(&local_2c,param_2,*(int *)(uVar8 + iVar6) + -1);
    if (local_2c != 0) {
      uVar9 = *(undefined4 *)(uVar8 + iVar6);
      uVar5 = *(undefined4 *)(local_2c + 0x30);
      uVar7 = ((undefined4 *)(uVar8 + iVar6))[1];
      local_38 = local_2c;
      uStack_34 = local_28;
      uStack_30 = local_24;
      FUN_01ab4580(&local_38);
      uVar3 = *puVar2;
      *param_1 = 0;
      param_1[1] = uVar5;
      param_1[2] = uVar9;
      param_1[3] = uVar7;
      *puVar2 = uVar3 - 1;
      return;
    }
    uVar3 = *puVar2 - 1;
LAB_01ab9a48:
    *puVar2 = uVar3;
  }
  *param_1 = 1;
  return;
}

