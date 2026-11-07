// FUN_01288548 @ 01288548 size=212 calls_out=1 calls_in=2
// strings: 

bool FUN_01288548(int *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 < 100) {
    iVar5 = param_1[2];
    iVar2 = *param_1;
    iVar3 = iVar5;
    if (iVar2 == iVar5) {
      FUN_006520b4(param_1,iVar5,1,1,1);
      iVar2 = *param_1;
      iVar3 = param_1[2];
    }
    iVar1 = param_1[1];
    iVar4 = iVar5 + 1;
    param_1[2] = iVar4;
    *(byte *)(iVar1 + iVar3) = (byte)((uint)((short)(ushort)param_2 * 0xcd) >> 0xb) | 0x30;
    if (iVar2 == iVar4) {
      FUN_006520b4(param_1,iVar2,1,1,1);
      iVar1 = param_1[1];
      iVar4 = param_1[2];
    }
    *(byte *)(iVar1 + iVar4) =
         param_2 + (char)((uint)((short)(ushort)param_2 * 0xcd) >> 0xb) * -10 | 0x30;
    param_1[2] = iVar5 + 2;
  }
  return 99 < param_2;
}

