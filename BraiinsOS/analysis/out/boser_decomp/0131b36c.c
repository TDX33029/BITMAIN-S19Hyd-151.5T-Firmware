// FUN_0131b36c @ 0131b36c size=520 calls_out=0 calls_in=2
// strings: 

void FUN_0131b36c(undefined1 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar3 = *(uint *)((int)param_2 + 0x1c) >> 0x13;
  uVar10 = (uint)param_2[4] + uVar3;
  lVar1 = (ulonglong)(*(uint *)((int)param_2 + 0x24) >> 0x13) * 0x13 + (*param_2 & 0x7ffffffffffff);
  iVar8 = (*(uint *)((int)param_2 + 0x24) & 0x7ffff) + (uint)CARRY4((uint)param_2[4],uVar3);
  uVar3 = *(uint *)((int)param_2 + 0x14) >> 0x13;
  uVar9 = (uint)param_2[3] + uVar3;
  iVar7 = (*(uint *)((int)param_2 + 0x1c) & 0x7ffff) + (uint)CARRY4((uint)param_2[3],uVar3);
  uVar3 = *(uint *)((int)param_2 + 0xc) >> 0x13;
  uVar2 = (uint)param_2[2] + uVar3;
  iVar11 = (*(uint *)((int)param_2 + 0x14) & 0x7ffff) + (uint)CARRY4((uint)param_2[2],uVar3);
  uVar3 = *(uint *)((int)param_2 + 4) >> 0x13;
  uVar5 = (uint)param_2[1] + uVar3;
  iVar6 = (*(uint *)((int)param_2 + 0xc) & 0x7ffff) + (uint)CARRY4((uint)param_2[1],uVar3);
  lVar1 = lVar1 + (ulonglong)
                  (iVar8 + (uint)CARRY4(uVar10,iVar7 + (uint)CARRY4(uVar9,iVar11 + (uint)CARRY4(
                                                  uVar2,iVar6 + (uint)CARRY4(uVar5,(int)((ulonglong)
                                                                                         lVar1 >> 
                                                  0x20) + (uint)(0xffffffec < (uint)lVar1) >> 0x13)
                                                  >> 0x13) >> 0x13) >> 0x13) >> 0x13) * 0x13;
  *param_1 = (char)lVar1;
  param_1[4] = (char)((ulonglong)lVar1 >> 0x20);
  param_1[3] = (char)((ulonglong)lVar1 >> 0x18);
  param_1[2] = (char)((ulonglong)lVar1 >> 0x10);
  param_1[1] = (char)((ulonglong)lVar1 >> 8);
  param_1[5] = (char)((ulonglong)lVar1 >> 0x28);
  uVar3 = (uint)((ulonglong)lVar1 >> 0x33);
  uVar4 = uVar5 + uVar3;
  param_1[6] = (byte)((ulonglong)lVar1 >> 0x30) & 7 | (char)uVar4 * '\b';
  uVar5 = iVar6 + (uint)CARRY4(uVar5,uVar3);
  param_1[10] = (byte)(uVar4 >> 0x1d) | (char)uVar5 * '\b';
  uVar3 = uVar2 + (uVar5 >> 0x13);
  param_1[9] = (char)(uVar4 >> 0x15);
  param_1[8] = (char)(uVar4 >> 0xd);
  param_1[7] = (char)(uVar4 >> 5);
  param_1[0xb] = (char)(uVar5 >> 5);
  param_1[0xc] = (char)uVar3 * '@' | (byte)((uVar5 & 0x7e000) >> 0xd);
  uVar2 = iVar11 + (uint)CARRY4(uVar2,uVar5 >> 0x13);
  param_1[0x10] = (byte)(uVar3 >> 0x1a) | (char)uVar2 * '@';
  param_1[0xf] = (char)(uVar3 >> 0x12);
  param_1[0xe] = (char)(uVar3 >> 10);
  param_1[0xd] = (char)(uVar3 >> 2);
  param_1[0x12] = (char)(uVar2 >> 10);
  param_1[0x11] = (char)(uVar2 >> 2);
  uVar4 = uVar9 + (uVar2 >> 0x13);
  param_1[0x13] = (char)uVar4 * '\x02' | (byte)((uVar2 & 0x40000) >> 0x12);
  uVar3 = iVar7 + (uint)CARRY4(uVar9,uVar2 >> 0x13);
  param_1[0x17] = (byte)(uVar4 >> 0x1f) | (char)uVar3 * '\x02';
  param_1[0x16] = (char)(uVar4 >> 0x17);
  param_1[0x15] = (char)(uVar4 >> 0xf);
  param_1[0x14] = (char)(uVar4 >> 7);
  param_1[0x18] = (char)(uVar3 >> 7);
  uVar2 = uVar10 + (uVar3 >> 0x13);
  param_1[0x19] = (char)uVar2 * '\x10' | (byte)((uVar3 & 0x78000) >> 0xf);
  uVar3 = iVar8 + (uint)CARRY4(uVar10,uVar3 >> 0x13);
  param_1[0x1f] = (char)((uVar3 & 0x7ffff) >> 0xc);
  param_1[0x1d] = (byte)(uVar2 >> 0x1c) | (char)uVar3 * '\x10';
  param_1[0x1c] = (char)(uVar2 >> 0x14);
  param_1[0x1b] = (char)(uVar2 >> 0xc);
  param_1[0x1a] = (char)(uVar2 >> 4);
  param_1[0x1e] = (char)(uVar3 >> 4);
  return;
}

