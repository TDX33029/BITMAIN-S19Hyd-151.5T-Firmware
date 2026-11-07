// FUN_0124d184 @ 0124d184 size=688 calls_out=13 calls_in=0
// strings: 

undefined4
FUN_0124d184(undefined4 param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  uint local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [4];
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  
  if (*param_2 == '\x05') {
    local_7c = *(int *)(param_2 + 4);
    local_78 = *(undefined4 *)(param_2 + 8);
    local_64 = *(undefined4 *)(param_2 + 0xc);
    if (local_7c == 0) {
      local_64 = 0;
    }
    local_84 = (uint)(local_7c != 0);
    local_70 = 0;
    local_80 = 0;
    local_74 = local_84;
    local_6c = local_7c;
    local_68 = local_78;
    iVar3 = FUN_00f45584(&local_84);
    while (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 8);
      uVar8 = *(undefined4 *)(iVar3 + 4);
      if (iVar7 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = thunk_FUN_016d4a50(iVar7);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,iVar7);
        }
      }
      FUN_016dd1aa(iVar3,uVar8,iVar7);
      local_60[0] = 3;
      local_5c = iVar7;
      local_58 = iVar3;
      local_54 = iVar7;
      iVar3 = FUN_011d018c(param_1,local_60,param_3,param_4,param_5);
      if (iVar3 != 0) {
        piVar4 = *(int **)(iVar3 + 0x78);
        do {
          iVar7 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar7 + 1;
        if (-1 < iVar7) {
          piVar4 = *(int **)(iVar3 + 0x78);
          uVar11 = *(uint *)(iVar3 + 0x7c);
          do {
            iVar7 = *piVar4;
            bVar2 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar2);
          *piVar4 = iVar7 + 1;
          if (-1 < iVar7) {
            if (param_4 == 0) {
              local_44[0] = 0;
            }
            else {
              DataMemoryBarrier(0xb);
              if (*(int *)(param_4 + 0x14) != 0) {
                FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
              }
              piVar5 = *(int **)(param_4 + 0xc);
              do {
                iVar7 = *piVar5;
                bVar2 = (bool)hasExclusiveAccess(piVar5);
              } while (!bVar2);
              *piVar5 = iVar7 + 1;
              if (iVar7 < 0) goto LAB_0124d430;
              uVar10 = *(undefined4 *)(param_4 + 0x10);
              uVar6 = 0;
              uVar8 = *(undefined4 *)(param_4 + 0xc);
              uVar9 = (*(int **)(param_4 + 4))[1];
              if (uVar9 <= uVar11) {
                iVar7 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar4 + 2,uVar9);
                uVar6 = uVar9;
                if (iVar7 != 0) {
                  uVar6 = 0;
                }
              }
              local_2c = FUN_011e1508((int)(piVar4 + 2) + uVar6,uVar11 - uVar6);
              local_38 = 3;
              local_44[0] = 2;
              local_34 = uVar8;
              local_30 = uVar10;
            }
            uVar12 = FUN_01238114(param_3);
            uVar8 = FUN_011f0ab8(iVar3);
            uVar8 = FUN_011f0950(piVar4,uVar11,local_44,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20)
                                 ,param_2,uVar8);
            DataMemoryBarrier(0xb);
            do {
              iVar3 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar3 + -1;
            if (iVar3 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(piVar4,uVar11);
            }
            FUN_01164f34(local_60);
            return uVar8;
          }
        }
LAB_0124d430:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x124d430);
        (*pcVar1)();
      }
      FUN_01164f34(local_60);
      iVar3 = FUN_00f45584(&local_84);
    }
  }
  return 0;
}

