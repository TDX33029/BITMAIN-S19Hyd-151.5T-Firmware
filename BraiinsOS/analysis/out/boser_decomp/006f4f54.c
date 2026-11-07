// FUN_006f4f54 @ 006f4f54 size=284 calls_out=2 calls_in=7
// strings: 

ulonglong FUN_006f4f54(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  
  iVar1 = *(int *)(param_1 + 0x80);
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar3 = *(uint *)(param_1 + 0x84);
  if (uVar5 != 0) {
    if (uVar5 < uVar3) {
      if (*(char *)(iVar1 + uVar5) < -0x40) {
LAB_006f4f8c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar1,uVar3,uVar5,uVar3,&DAT_01c061f0);
      }
    }
    else if (uVar5 != uVar3) goto LAB_006f4f8c;
  }
  uVar6 = 0;
  if (uVar5 != uVar3) {
    pbVar4 = (byte *)(iVar1 + uVar5);
    puVar2 = (undefined1 *)(uint)*pbVar4;
    if (0x7fffffff < (uint)(int)(char)*pbVar4) {
      if (puVar2 < (undefined1 *)0xe0) {
        puVar2 = (undefined1 *)(pbVar4[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
      }
      else {
        uVar3 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (puVar2 < (undefined1 *)0xf0) {
          puVar2 = (undefined1 *)(uVar3 | ((uint)puVar2 & 0x1f) << 0xc);
        }
        else {
          puVar2 = (undefined1 *)(pbVar4[3] & 0x3f | uVar3 << 6 | ((uint)puVar2 & 7) << 0x12);
          if (puVar2 == &DAT_00110000) goto LAB_006f5034;
        }
      }
    }
    bVar8 = puVar2 <= param_2;
    bVar7 = param_2 == puVar2;
    if (!bVar8 || bVar7) {
      bVar8 = param_3 <= puVar2;
      bVar7 = puVar2 == param_3;
    }
    uVar6 = (uint)(!bVar8 || bVar7);
    if (!bVar8 || bVar7) {
      *(uint *)(param_1 + 0x88) = uVar5 + 1;
    }
  }
LAB_006f5034:
  if (*(char *)(param_1 + 0x7c) == '\x01') {
    local_28 = 2;
    local_24 = param_2;
    local_20 = param_3;
    FUN_006e7f1c(param_1,uVar5,&local_28,uVar6);
  }
  return CONCAT44(param_1,uVar6) ^ 1;
}

