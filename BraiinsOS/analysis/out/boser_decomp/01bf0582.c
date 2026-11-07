// FUN_01bf0582 @ 01bf0582 size=64 calls_out=2 calls_in=2
// strings: 

int FUN_01bf0582(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint local_20;
  int iStack_1c;
  uint local_18;
  
  iVar1 = FUN_01bf0028(param_1,&local_20);
  if (iVar1 == 0) {
    if (iStack_1c + (uint)(0x7fffffff < local_20) == 0) {
      *param_2 = local_20;
      param_2[1] = local_18;
    }
    else {
      puVar2 = (undefined4 *)FUN_01be3244();
      iVar1 = -1;
      *puVar2 = 0x4b;
    }
  }
  return iVar1;
}

