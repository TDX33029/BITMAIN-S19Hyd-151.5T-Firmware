// FUN_01560554 @ 01560554 size=432 calls_out=6 calls_in=0
// strings: 

undefined8
FUN_01560554(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint uStack_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    piVar12 = *(int **)(param_1 + 4);
    iVar14 = *(int *)(param_1 + 8);
    local_5c = 0;
    local_60 = 4;
    local_64 = 0;
    if (iVar14 != 0) {
      iVar2 = *(int *)(param_2 + 4);
      uVar9 = *(undefined4 *)(param_2 + 8);
      uVar7 = *(undefined4 *)(param_2 + 0xc);
      if (iVar2 == 0) {
        uVar7 = 0;
      }
      uVar3 = (uint)(iVar2 != 0);
      piVar13 = piVar12;
      do {
        piVar4 = piVar13 + 6;
        local_44 = 0;
        local_54 = 0;
        local_58 = uVar3;
        local_50 = iVar2;
        local_4c = uVar9;
        uStack_48 = uVar3;
        local_40 = iVar2;
        local_3c = uVar9;
        local_38 = uVar7;
        while( true ) {
          uVar15 = FUN_01a41998(&local_58);
          iVar5 = (int)uVar15;
          if (iVar5 == 0) break;
          uVar10 = *(undefined4 *)(iVar5 + 4);
          uVar11 = *(undefined4 *)(iVar5 + 8);
          cVar1 = FUN_0155ff74(*piVar13 + 8,uVar10,uVar11);
          if (cVar1 != '\0') {
            local_34 = 0x80000000;
            local_30 = uVar10;
            uStack_2c = uVar11;
            uStack_28 = param_3;
            uVar15 = FUN_01576990(piVar13 + 1,(int)((ulonglong)uVar15 >> 0x20),&local_34,param_4,
                                  param_5);
            FUN_014fb9d0(&local_64,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
          }
        }
        piVar13 = piVar4;
      } while (piVar4 != piVar12 + iVar14 * 6);
    }
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    local_50 = local_64;
    puVar6 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar8 = &PTR_LAB_01cfbbc4;
    *puVar6 = local_58;
    puVar6[1] = local_54;
    puVar6[2] = local_50;
    puVar6[3] = local_4c;
  }
  else {
    puVar6 = (uint *)&DAT_00000001;
    ppuVar8 = (undefined **)&UNK_01cfc1a4;
  }
  return CONCAT44(ppuVar8,puVar6);
}

