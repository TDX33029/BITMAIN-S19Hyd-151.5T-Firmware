// FUN_01af7fe8 @ 01af7fe8 size=332 calls_out=1 calls_in=2
// strings: 

uint FUN_01af7fe8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int local_1c [3];
  
  puVar3 = *(uint **)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x34);
  FUN_012fbd94(local_1c,puVar3,uVar4);
  uVar2 = 0;
  if (local_1c[0] == 0) {
    if (uVar4 < 4) {
      do {
        if (uVar4 == 0) goto LAB_01af8094;
        iVar1 = uVar4 - 1;
        uVar4 = uVar4 - 1;
      } while ((uint)(int)*(char *)((int)puVar3 + iVar1) < 0x80000000);
    }
    else if ((*puVar3 & 0x80808080) == 0) {
      uVar5 = ((int)puVar3 + 3U & 0xfffffffc) - (int)puVar3;
      if (uVar5 == 0) {
        uVar5 = 4;
      }
      for (; uVar5 < uVar4 - 4; uVar5 = uVar5 + 4) {
        if ((*(uint *)((int)puVar3 + uVar5) & 0x80808080) != 0) goto LAB_01af80d8;
      }
      if ((*(uint *)((int)puVar3 + (uVar4 - 4)) & 0x80808080) == 0) {
LAB_01af8094:
        puVar3 = *(uint **)(param_1 + 0x38);
        uVar4 = *(uint *)(param_1 + 0x3c);
        if (uVar4 < 4) {
          do {
            if (uVar4 == 0) goto LAB_01af80dc;
            iVar1 = uVar4 - 1;
            uVar4 = uVar4 - 1;
          } while ((uint)(int)*(char *)((int)puVar3 + iVar1) < 0x80000000);
        }
        else if ((*puVar3 & 0x80808080) == 0) {
          uVar5 = ((int)puVar3 + 3U & 0xfffffffc) - (int)puVar3;
          if (uVar5 == 0) {
            uVar5 = 4;
          }
          for (; uVar5 < uVar4 - 4; uVar5 = uVar5 + 4) {
            if ((*(uint *)((int)puVar3 + uVar5) & 0x80808080) != 0) goto LAB_01af80d8;
          }
          if ((*(uint *)((int)puVar3 + (uVar4 - 4)) & 0x80808080) != 0) {
            uVar2 = 0x800;
          }
          goto LAB_01af80dc;
        }
      }
    }
LAB_01af80d8:
    uVar2 = 0x800;
  }
LAB_01af80dc:
  return uVar2 | (uint)*(byte *)(param_1 + 0xaa) << 3 | (uint)*(byte *)(param_1 + 0xa8);
}

