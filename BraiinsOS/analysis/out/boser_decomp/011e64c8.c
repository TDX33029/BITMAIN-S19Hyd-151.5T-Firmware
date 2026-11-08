// FUN_011e64c8 @ 011e64c8 size=256 calls_out=0 calls_in=3
// strings: 

void FUN_011e64c8(uint *param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_2 + 8);
  param_1[4] = 0x80000001;
  iVar3 = ((int)uVar5 >> 10) + 999999;
  uVar6 = *(uint *)(param_2 + 4);
  param_1[1] = 0;
  lVar1 = (longlong)iVar3 * 0x5b5 + ((ulonglong)((longlong)iVar3 * 0x5b5) >> 0x3e);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * -0x51eb851f) >> 0x20);
  uVar2 = (short)*(char *)(param_2 + 0xe) * -0xe10 +
          (((int)((uint)*(ushort *)(param_2 + 0xc) << 0x10) >> 0x18) * -0x3c -
          (int)(char)*(ushort *)(param_2 + 0xc));
  lVar1 = (longlong)
          (int)((uVar5 & 0x1ff) + ((iVar4 >> 5) - (iVar4 >> 0x1f)) + iVar3 / 400 +
                ((uint)lVar1 >> 2 | (int)((ulonglong)lVar1 >> 0x20) << 0x1e) + -0x15d021bf) *
          0x15180 + (ulonglong)
                    (((uVar6 & 0x1fffff) >> 0x10) * 0xe10 + (uVar6 & 0x3f) +
                    ((uVar6 & 0x3fff) >> 8) * 0x3c);
  uVar6 = (uint)lVar1;
  uVar5 = (int)((ulonglong)lVar1 >> 0x20) + ((int)uVar2 >> 0x1f) + (uint)CARRY4(uVar6,uVar2);
  param_1[3] = uVar5;
  param_1[2] = uVar6 + uVar2;
  *param_1 = uVar5 >> 0x1f;
  return;
}

