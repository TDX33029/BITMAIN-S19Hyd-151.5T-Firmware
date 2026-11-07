// FUN_01638570 @ 01638570 size=640 calls_out=6 calls_in=2
// strings: assertion failed: prev.ref_count() >= 1

uint FUN_01638570(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_3c;
  int local_38;
  int local_34;
  int *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  local_34 = param_4 - param_3;
  local_3c = param_3;
  local_38 = param_4;
  if (local_34 != 0x100) {
    local_28 = &local_3c;
    local_30 = &local_38;
    local_24 = &LAB_00fac484;
    local_2c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_34,&DAT_00569678,&DAT_0058cb72,&local_30,&DAT_018ac4bc);
  }
  puVar2 = (uint *)(param_1 + 8);
  if (*puVar2 == param_3 && *(uint *)(param_1 + 0xc) == param_3) {
    DataMemoryBarrier(0xb);
    do {
      bVar9 = (bool)hasExclusiveAccess(puVar2);
      if (bVar9) {
        *puVar2 = param_3 + 0x80;
        *(uint *)(param_1 + 0xc) = param_3 + 0x80;
        iVar1 = *(int *)(param_1 + 0x14);
        iVar3 = 0;
        puVar2 = *(uint **)(iVar1 + (param_3 & 0xff) * 4);
        uVar8 = 1;
        puVar6 = puVar2;
        do {
          uVar7 = param_3 + uVar8;
          bVar9 = 0xfffffffe < uVar8;
          uVar8 = uVar8 + 1;
          iVar3 = iVar3 + (uint)bVar9;
          puVar4 = *(uint **)(iVar1 + (uVar7 & 0xff) * 4);
          puVar6[1] = (uint)puVar4;
          puVar6 = puVar4;
        } while (uVar8 != 0x80 || iVar3 != 0);
        puVar4[1] = param_2;
        pcVar5 = (char *)(param_5 + 0x94);
        if (*pcVar5 == '\0') {
          bVar9 = (bool)hasExclusiveAccess(pcVar5);
          if (!bVar9) goto LAB_0163877c;
          *pcVar5 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0163877c:
          FUN_01280da8(pcVar5);
        }
        FUN_0128236c(pcVar5);
        if (*(char *)(param_5 + 0xac) != '\x01') {
          if (*(int *)(param_5 + 0xa8) == 0) {
            *(uint **)(param_5 + 0xa4) = puVar2;
          }
          else {
            *(uint **)(*(int *)(param_5 + 0xa8) + 4) = puVar2;
          }
          *(uint *)(param_5 + 0xa8) = param_2;
          DataMemoryBarrier(0xb);
          *(int *)(param_5 + 0x90) = *(int *)(param_5 + 0x90) + 0x81;
          FUN_01282570(pcVar5);
          if (*pcVar5 == '\x01') {
            DataMemoryBarrier(0xb);
            do {
              bVar9 = (bool)hasExclusiveAccess(pcVar5);
              if (bVar9) {
                *pcVar5 = '\0';
                return 0;
              }
            } while (*pcVar5 == '\x01');
          }
          ClearExclusiveLocal();
          FUN_01280a5c(pcVar5);
          return 0;
        }
        FUN_01282570(pcVar5);
        if (*pcVar5 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar9 = (bool)hasExclusiveAccess(pcVar5);
            if (bVar9) {
              *pcVar5 = '\0';
              goto LAB_016386ac;
            }
          } while (*pcVar5 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_01280a5c(pcVar5);
LAB_016386ac:
        do {
          puVar6 = (uint *)puVar2[1];
          DataMemoryBarrier(0xb);
          do {
            uVar8 = *puVar2;
            bVar9 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar9);
          *puVar2 = uVar8 - 0x40;
          DataMemoryBarrier(0xb);
          if (uVar8 < 0x40) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa464("assertion failed: prev.ref_count() >= 1",0x27,&DAT_018ad2bc);
          }
          if ((uVar8 & 0xffffffc0) == 0x40) {
            (**(code **)(puVar2[2] + 8))();
          }
          puVar2 = puVar6;
        } while (puVar6 != (uint *)0x0);
        return 0;
      }
    } while (*puVar2 == param_3 && *(uint *)(param_1 + 0xc) == param_3);
  }
  ClearExclusiveLocal();
  return param_2;
}

