// FUN_01953e60 @ 01953e60 size=132 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01953e60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *local_2a0 [77];
  undefined1 local_16c;
  
  local_2a0[0] = (int *)*param_1;
  do {
    iVar3 = *local_2a0[0];
    bVar2 = (bool)hasExclusiveAccess(local_2a0[0]);
  } while (!bVar2);
  *local_2a0[0] = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1953ee0);
    (*pcVar1)();
  }
  local_16c = 0;
  iVar3 = thunk_FUN_01be5118(0x28c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28c);
  }
  FUN_01bed4e2(iVar3,local_2a0,0x28c);
  FUN_005fb2fc(param_3);
  return CONCAT44(&UNK_01d2659c,iVar3);
}

