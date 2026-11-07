// FUN_01b81cf0 @ 01b81cf0 size=128 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01b81cf0(uint *param_1,ushort *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*param_2;
  param_1[3] = uVar3;
  param_1[1] = (uint)(param_2 + 2);
  if (uVar3 == 0) {
    iVar1 = 8;
  }
  else {
    iVar1 = (4 << (uVar3 - 1 & 0xff)) + 4;
  }
  uVar3 = (int)param_2 + iVar1;
  param_1[2] = uVar3;
  iVar1 = *(int *)(uVar3 + param_3 * 8 + 4);
  uVar2 = iVar1 + 0x8000;
  *param_1 = (uint)(param_2 + 2)
                   [*(int *)(uVar3 + param_3 * 8) +
                    ((int)((uVar2 & 0xffff0000) - iVar1) >> (uVar2 >> 0x10 & 0xff))];
  return 0;
}

