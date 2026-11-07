// FUN_01561d24 @ 01561d24 size=496 calls_out=7 calls_in=0
// strings: 

undefined8
FUN_01561d24(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
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
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_2 == '\x05') {
    iVar9 = *(int *)(param_1 + 8);
    piVar10 = *(int **)(param_1 + 4);
    local_5c = 0;
    local_60 = 4;
    local_64 = 0;
    if (iVar9 != 0) {
      iVar1 = *(int *)(param_2 + 4);
      uVar8 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined4 *)(param_2 + 0xc);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      uVar2 = (uint)(iVar1 != 0);
      piVar11 = piVar10;
      do {
        piVar3 = piVar11 + 6;
        local_44 = 0;
        local_54 = 0;
        local_58 = uVar2;
        local_50 = iVar1;
        local_4c = uVar8;
        uStack_48 = uVar2;
        local_40 = iVar1;
        local_3c = uVar8;
        local_38 = uVar6;
        while( true ) {
          uVar12 = FUN_01a41998(&local_58);
          iVar4 = (int)uVar12;
          if (iVar4 == 0) break;
          FUN_01552754(&local_34,*(undefined4 *)(*piVar11 + 8),*(undefined4 *)(*piVar11 + 0xc),
                       *(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
          if (local_34 != -0x80000000) {
            if (local_34 == -0x7fffffff) {
              if ((char)local_30 != '\0') {
                local_30 = *(undefined4 *)(iVar4 + 4);
                uStack_2c = *(undefined4 *)(iVar4 + 8);
                local_34 = -0x80000000;
                uStack_28 = param_3;
                uVar12 = FUN_01576990(piVar11 + 1,(int)((ulonglong)uVar12 >> 0x20),&local_34,param_4
                                      ,param_5);
                FUN_014fb9d0(&local_64,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
              }
            }
            else {
              FUN_019bb7e0(local_34,local_30);
            }
          }
        }
        piVar11 = piVar3;
      } while (piVar3 != piVar10 + iVar9 * 6);
    }
    local_4c = local_60 + local_5c * 4;
    local_58 = local_60;
    local_54 = local_60;
    local_50 = local_64;
    puVar5 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar7 = &PTR_LAB_01cfbbc4;
    *puVar5 = local_58;
    puVar5[1] = local_54;
    puVar5[2] = local_50;
    puVar5[3] = local_4c;
  }
  else {
    puVar5 = (uint *)&DAT_00000001;
    ppuVar7 = (undefined **)&UNK_01cfc1a4;
  }
  return CONCAT44(ppuVar7,puVar5);
}

