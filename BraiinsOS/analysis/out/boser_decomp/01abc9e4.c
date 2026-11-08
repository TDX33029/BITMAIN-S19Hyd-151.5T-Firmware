// FUN_01abc9e4 @ 01abc9e4 size=196 calls_out=2 calls_in=0
// strings: 

void FUN_01abc9e4(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined4 local_18;
  undefined2 local_14;
  
  uVar2 = DAT_01d51af8;
  do {
    uVar3 = uVar2;
    uVar2 = DAT_01d51af8;
    if (*(uint *)(param_1 + 4) <= uVar3) break;
    if (DAT_01d51af8 == uVar3) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(0x1d51af8);
        if (bVar1) {
          bVar1 = true;
          DAT_01d51af8 = *(uint *)(param_1 + 4);
          goto LAB_01abca40;
        }
      } while (DAT_01d51af8 == uVar3);
    }
    bVar1 = false;
    ClearExclusiveLocal();
LAB_01abca40:
    DataMemoryBarrier(0xb);
  } while (!bVar1);
  if (0xffff < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0056adc8,0x41,&DAT_01d2f20c);
  }
  puStack_1c = &LAB_018a13b8;
  local_18 = 0;
  local_14 = (undefined2)uVar3;
  iStack_20 = param_1;
  FUN_012fa178(*param_2,param_2[1],&DAT_005709b8,&iStack_20);
  return;
}

