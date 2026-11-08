// FUN_013c9b74 @ 013c9b74 size=244 calls_out=3 calls_in=0
// strings: 

uint FUN_013c9b74(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int local_c;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_2,uVar3,uVar3,&DAT_018947f8);
  }
  uVar3 = uVar3 - param_2;
  local_c = param_3;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_01894518);
  }
  pbVar4 = (byte *)(*(int *)(param_1 + 4) + param_2 * 4);
  bVar1 = *pbVar4;
  if (bVar1 == 0xff) {
    uVar2 = *(int *)(param_1 + 0x28) + 2;
  }
  else {
    iVar5 = (uint)bVar1 + (uint)(bVar1 >> 2);
    uVar2 = iVar5 + 2;
    if ((bVar1 & 3) != 0) {
      uVar2 = iVar5 + 3;
    }
  }
  if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,uVar3,&DAT_01894528);
  }
  if (-1 < (int)*(uint *)(pbVar4 + uVar2 * 4)) {
    uVar2 = param_3 + uVar2 + 1;
    if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar3,&DAT_01894538);
    }
    return *(uint *)(pbVar4 + uVar2 * 4);
  }
  if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&DAT_00568f30,&local_c,0);
  }
  return *(uint *)(pbVar4 + uVar2 * 4) & 0x7fffffff;
}

