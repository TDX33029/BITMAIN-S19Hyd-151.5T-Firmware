// FUN_01931818 @ 01931818 size=240 calls_out=2 calls_in=10
// strings: 

void FUN_01931818(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  bVar1 = 3;
  if (0x17 < *param_1) {
    bVar1 = *param_1 - 0x18;
  }
  if (bVar1 - 1 < 2) {
    uVar5 = *(uint *)(param_1 + 0x14);
    uVar2 = uVar5 + 2;
    bVar7 = 0xfffffffc < uVar5;
    bVar6 = uVar5 == 0xfffffffd;
    uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
    if (uVar5 < 0xfffffffe) {
      bVar7 = uVar4 <= uVar2;
      bVar6 = uVar2 == uVar4;
    }
    if (!bVar7 || bVar6) {
      uVar2 = (uVar4 - uVar5) - 2;
      *(ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + uVar5) =
           (ushort)((uVar2 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar5,uVar2,uVar4,&DAT_01d2573c);
  }
  if (bVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    uVar2 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
    if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar2,&DAT_01d2572c);
    }
    *(byte *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + uVar4) = (char)uVar2 + ~(byte)uVar4;
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x14);
  uVar2 = uVar5 + 3;
  bVar7 = 0xfffffffb < uVar5;
  bVar6 = uVar5 == 0xfffffffc;
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  if (uVar5 < 0xfffffffd) {
    bVar7 = uVar4 <= uVar2;
    bVar6 = uVar2 == uVar4;
  }
  if (!bVar7 || bVar6) {
    uVar2 = (uVar4 - uVar5) - 3;
    puVar3 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + uVar5);
    *puVar3 = (ushort)(((uVar2 >> 8 & 0xff) << 0x10) >> 8) | (ushort)(uVar2 >> 0x10) & 0xff;
    *(char *)(puVar3 + 1) = (char)(uVar2 * 0x1000000 >> 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar5,uVar2,uVar4,&DAT_01d2574c);
}

