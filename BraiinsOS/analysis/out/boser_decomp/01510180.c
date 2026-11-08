// FUN_01510180 @ 01510180 size=520 calls_out=6 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_01510180(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
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
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    local_50 = *(uint *)(param_2 + 4);
    local_4c = *(uint *)(param_2 + 8);
    iVar6 = *(int *)(param_1 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    if (local_50 == 0) {
      local_38 = 0;
    }
    local_60 = 4;
    iVar7 = *(int *)(param_1 + 4);
    iVar10 = iVar6 * 100 + iVar7;
    local_58 = (uint)(local_50 != 0);
    local_5c = 0;
    local_64 = 0;
    local_44 = 0;
    local_54 = 0;
    local_48 = local_58;
    local_40 = local_50;
    local_3c = local_4c;
LAB_01510210:
    uVar12 = FUN_01a41998(&local_58);
    uVar4 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar2 = (int)uVar12;
    if (iVar2 != 0) {
      if (iVar6 == 0) {
LAB_015102d4:
        local_30 = *(undefined4 *)(iVar2 + 4);
        uStack_2c = *(undefined4 *)(iVar2 + 8);
        local_34 = 0x80000000;
        uStack_28 = param_3;
        uVar12 = FUN_01576990(param_1 + 0xc,uVar4,&local_34,param_4,param_5);
        FUN_014fb9d0(&local_64,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
      }
      else {
        bVar11 = false;
        iVar9 = iVar7;
        do {
          iVar8 = iVar9;
          while( true ) {
            cVar1 = FUN_01501468(iVar8,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8));
            iVar9 = iVar8 + 100;
            if (cVar1 != '\0') break;
            iVar8 = iVar9;
            if (iVar9 == iVar10) {
              if (!bVar11) goto LAB_015102d4;
              goto LAB_01510210;
            }
          }
          local_30 = *(undefined4 *)(iVar2 + 4);
          uStack_2c = *(undefined4 *)(iVar2 + 8);
          local_34 = 0x80000000;
          uStack_28 = param_3;
          uVar12 = FUN_01576990(iVar8 + 0x50,uVar4,&local_34,param_4,param_5);
          FUN_014fb9d0(&local_64,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
          bVar11 = true;
        } while (iVar9 != iVar10);
      }
      goto LAB_01510210;
    }
    local_50 = local_64;
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    puVar3 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    puVar5 = &UNK_01cfa84c;
    *puVar3 = local_58;
    puVar3[1] = local_54;
    puVar3[2] = local_50;
    puVar3[3] = local_4c;
  }
  else {
    puVar3 = (uint *)&DAT_00000001;
    puVar5 = &UNK_01cfc1a4;
  }
  return CONCAT44(puVar5,puVar3);
}

