// FUN_01560d88 @ 01560d88 size=464 calls_out=7 calls_in=0
// strings: 

undefined8
FUN_01560d88(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined8 uVar12;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 == '\x05') {
    piVar9 = *(int **)(param_1 + 4);
    iVar11 = *(int *)(param_1 + 8);
    local_64 = 0;
    local_68 = 4;
    local_6c = 0;
    if (iVar11 != 0) {
      iVar1 = *(int *)(param_2 + 4);
      uVar8 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined4 *)(param_2 + 0xc);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      uVar2 = (uint)(iVar1 != 0);
      piVar10 = piVar9;
      do {
        piVar3 = piVar10 + 6;
        local_4c = 0;
        local_5c = 0;
        local_60 = uVar2;
        local_58 = iVar1;
        local_54 = uVar8;
        uStack_50 = uVar2;
        local_48 = iVar1;
        local_44 = uVar8;
        local_40 = uVar6;
        while( true ) {
          uVar12 = FUN_01a41998(&local_60);
          iVar4 = (int)uVar12;
          if (iVar4 == 0) break;
          FUN_01338048(&local_38,*piVar10 + 8,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8))
          ;
          if (local_38 == 0x12) {
            if ((char)local_34 != '\0') {
              local_34 = *(undefined4 *)(iVar4 + 4);
              uStack_30 = *(undefined4 *)(iVar4 + 8);
              local_38 = -0x80000000;
              uStack_2c = param_3;
              uVar12 = FUN_01576990(piVar10 + 1,(int)((ulonglong)uVar12 >> 0x20),&local_38,param_4,
                                    param_5);
              FUN_014fb9d0(&local_6c,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
            }
          }
          else {
            FUN_0150174c(&local_38);
          }
        }
        piVar10 = piVar3;
      } while (piVar3 != piVar9 + iVar11 * 6);
    }
    local_54 = local_68 + local_64 * 4;
    local_60 = local_68;
    local_5c = local_68;
    local_58 = local_6c;
    puVar5 = (uint *)thunk_FUN_01be5118(0x10);
    if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x10);
    }
    ppuVar7 = &PTR_LAB_01cfbbc4;
    *puVar5 = local_60;
    puVar5[1] = local_5c;
    puVar5[2] = local_58;
    puVar5[3] = local_54;
  }
  else {
    puVar5 = (uint *)&DAT_00000001;
    ppuVar7 = (undefined **)&UNK_01cfc1a4;
  }
  return CONCAT44(ppuVar7,puVar5);
}

