// FUN_016d8b08 @ 016d8b08 size=238 calls_out=1 calls_in=1
// strings: 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016d8b08(int param_1,int param_2)

{
  code *pcVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if ((*(uint **)(param_1 + 0x10) != (uint *)0x0) && (*(uint *)(param_1 + 0x14) != 0)) {
    iVar6 = 0;
    if (*(uint *)(param_1 + 0x14) < 0xc) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)0x0;
      for (puVar5 = *(uint **)(param_1 + 0x10); puVar5 != (uint *)0x0;
          puVar5 = (uint *)((int)puVar5 + uVar3)) {
        if (puVar5[1] == 1) {
          if (puVar5[2] == 0x1d) {
            if (iVar6 == 0) {
              iVar6 = 0x3f;
              goto LAB_016d8b64;
            }
          }
          else if (puVar5[2] == 0x23) {
            iVar6 = 0x40;
LAB_016d8b64:
            FUN_016dd1aa(&local_2c,puVar5 + 3,4);
            local_28 = local_2c;
            local_24 = local_2c >> 0x1f;
            FUN_016dd1aa(&local_2c,puVar5 + 4,4);
            local_20 = local_2c;
            local_1c = local_2c >> 0x1f;
          }
        }
        puVar2 = puVar5;
        if ((*puVar5 < 0xc) ||
           (uVar3 = *puVar5 + 3 & 0xfffffffc,
           (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x14)) - (int)puVar5) <=
           uVar3 + 0xc)) break;
      }
    }
    if (iVar6 != 0 && puVar2 != (uint *)0x0) {
      if ((uint)(param_2 - *(int *)(param_1 + 0x14)) < 0x1c) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x14) + 0x1c;
        *(int *)(param_1 + 0x14) = iVar4;
        if ((*puVar2 < 0xc) ||
           (uVar3 = *puVar2 + 3 & 0xfffffffc,
           (uint)((iVar4 + *(int *)(param_1 + 0x10)) - (int)puVar2) <= uVar3 + 0xc)) {
          _DAT_00000004 = 0;
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d8bf4);
          (*pcVar1)();
        }
        *(int *)((int)puVar2 + uVar3 + 8) = iVar6;
        *(undefined4 *)((int)puVar2 + uVar3 + 4) = 1;
        *(undefined4 *)((int)puVar2 + uVar3) = 0x1c;
        FUN_016dd1aa((int)puVar2 + uVar3 + 0xc,&local_28,0x10);
      }
    }
  }
  return;
}

