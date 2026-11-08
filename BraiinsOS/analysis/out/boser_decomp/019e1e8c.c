// FUN_019e1e8c @ 019e1e8c size=320 calls_out=3 calls_in=2
// strings: assertion failed: self.tail.is_none()

void FUN_019e1e8c(uint *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_2 + 8);
  ClearExclusiveLocal();
  if ((uVar4 & *(uint *)(param_2 + 0xc)) == 0xffffffff) {
    FUN_019dffdc(param_1 + 2);
    return;
  }
  uVar3 = param_1[1] ^ *(uint *)(param_2 + 0xc);
  uVar7 = *param_1 ^ uVar4 | 0x3f;
  bVar1 = (uint)(0xfffffffd < uVar7) <= uVar3 - 0xf;
  uVar4 = 0xfffffffe;
  if (uVar3 < 0x10 && bVar1) {
    uVar4 = uVar7;
  }
  if (uVar3 >= 0x10 || !bVar1) {
    uVar3 = 0xf;
  }
  uVar4 = LZCOUNT(uVar4) | 0x20;
  if (uVar3 != 0) {
    uVar4 = LZCOUNT(uVar3);
  }
  uVar3 = (uVar4 ^ 0x3e) / 6;
  if (0x23 < (uVar4 ^ 0x3e)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,6,&DAT_01d290ac);
  }
  ClearExclusiveLocal();
  iVar6 = param_1[4] + (uVar3 | uVar3 << 5) * 0x10;
  uVar3 = *(int *)(iVar6 + 0x208) * 6 & 0x3e;
  uVar4 = *(uint *)(param_2 + 8) >> uVar3 | *(uint *)(param_2 + 0xc) << (0x20 - uVar3 & 0xff);
  if (-1 < (int)(uVar3 - 0x20)) {
    uVar4 = *(uint *)(param_2 + 0xc) >> (uVar3 - 0x20 & 0xff);
  }
  uVar4 = uVar4 & 0x3f;
  iVar5 = iVar6 + uVar4 * 8;
  FUN_019dffdc(iVar5);
  iVar2 = *(int *)(iVar6 + uVar4 * 8);
  if ((iVar2 == 0) && (*(int *)(iVar5 + 4) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.tail.is_none()",0x25,&DAT_01d2900c);
  }
  if (iVar2 != 0) {
    return;
  }
  uVar3 = 1 << uVar4;
  uVar7 = uVar4 - 0x20;
  if (-1 < (int)uVar7) {
    uVar3 = 0;
  }
  *(uint *)(iVar6 + 0x200) = *(uint *)(iVar6 + 0x200) ^ uVar3;
  uVar4 = 1 >> (0x20 - uVar4 & 0xff);
  if (-1 < (int)uVar7) {
    uVar4 = 1 << (uVar7 & 0xff);
  }
  *(uint *)(iVar6 + 0x204) = *(uint *)(iVar6 + 0x204) ^ uVar4;
  return;
}

