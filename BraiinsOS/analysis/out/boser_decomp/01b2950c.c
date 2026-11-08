// FUN_01b2950c @ 01b2950c size=148 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b2950c(undefined2 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  psVar5 = &DAT_0053abfe;
  iVar3 = param_2;
  do {
    iVar4 = iVar3 + 8;
    psVar5 = psVar5 + 1;
    sVar1 = *psVar5;
    iVar2 = (int)*(short *)(iVar3 + 2) * (int)sVar1;
    *param_1 = (short)((uint)((short)((short)iVar2 * -0xcff) * -0xd01 + iVar2) >> 0x10);
    iVar3 = (int)*(short *)(iVar3 + 6) * (int)-sVar1;
    param_1[1] = (short)((uint)((short)((short)iVar3 * -0xcff) * -0xd01 + iVar3) >> 0x10);
    param_1 = param_1 + 2;
    iVar3 = iVar4;
  } while (param_2 + 0x200 != iVar4);
  return 0;
}

