// FUN_01895d9c @ 01895d9c size=200 calls_out=6 calls_in=4
// strings: 

undefined8 FUN_01895d9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int local_30 [3];
  int local_24;
  
  FUN_0189ba04(local_30,param_4);
  uVar5 = FUN_0189b9a4(local_30);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  uVar1 = (undefined4)uVar5;
  iVar2 = FUN_01895ca0(param_1,param_2,uVar1,iVar3);
  if (iVar2 == 0) {
    local_30[0] = param_4;
    local_24 = iVar3;
    if (iVar3 != param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(0,&local_24,local_30,0);
    }
    iVar2 = FUN_01bd4ff4(uVar1,param_3,param_4);
    if (iVar2 == -1) {
      uVar4 = uVar1;
      goto LAB_01895e34;
    }
  }
  uVar4 = 0;
  if (iVar3 != 0) {
    thunk_FUN_01be4678(uVar1);
  }
LAB_01895e34:
  return CONCAT44(iVar3,uVar4);
}

