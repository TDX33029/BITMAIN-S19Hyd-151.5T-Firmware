// FUN_0150ef6c @ 0150ef6c size=484 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_0150ef6c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    iVar10 = *(int *)(param_1 + 8);
    local_60 = 4;
    iVar7 = *(int *)(param_1 + 4);
    local_44 = 0;
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_54 = 0;
    local_58 = (uint)(local_50 != 0);
    local_5c = 0;
    local_64 = 0;
    local_48 = local_58;
    iStack_40 = local_50;
    uStack_3c = local_4c;
LAB_0150efec:
    uVar12 = FUN_01a41998(&local_58);
    uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar6 = (int)uVar12;
    if (iVar6 != 0) {
      uVar8 = *(undefined4 *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 8);
      if (iVar10 != 0) {
        iVar9 = iVar10 << 5;
        iVar11 = iVar7;
        do {
          if (*(int *)(iVar11 + 8) == iVar6) {
            uVar5 = *(undefined4 *)(iVar11 + 4);
            iVar1 = thunk_FUN_01bed842(uVar5,uVar8,iVar6);
            if (iVar1 == 0) {
              local_34 = 0x80000000;
              local_30 = uVar5;
              local_2c = iVar6;
              local_28 = param_3;
              uVar12 = FUN_01576990(iVar11 + 0xc,uVar3,&local_34,param_4,param_5);
              FUN_014fb9d0(&local_64,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
              goto LAB_0150efec;
            }
          }
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar9 + -0x20;
        } while (iVar9 != 0);
      }
      local_34 = 0x80000000;
      local_30 = uVar8;
      local_2c = iVar6;
      local_28 = param_3;
      uVar12 = FUN_01576990(param_1 + 0xc,uVar3,&local_34,param_4,param_5);
      FUN_014fb9d0(&local_64,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      goto LAB_0150efec;
    }
    local_50 = local_64;
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    puVar2 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar4 = &UNK_01cfa84c;
    *puVar2 = local_58;
    puVar2[1] = local_54;
    puVar2[2] = local_50;
    puVar2[3] = local_4c;
  }
  else {
    puVar2 = (uint *)&DAT_00000001;
    puVar4 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar4,puVar2);
}

