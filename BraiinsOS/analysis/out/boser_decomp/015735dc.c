// FUN_015735dc @ 015735dc size=148 calls_out=4 calls_in=0
// strings: 

bool FUN_015735dc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char local_28 [4];
  int *local_24;
  
  FUN_019664a4(local_28,param_1,param_2);
  if (local_28[0] != '\x06') {
    FUN_00e0febc(local_28);
    goto LAB_01573660;
  }
  if (*local_24 == 1) {
    if ((char)local_24[1] == '\x03') {
      puVar1 = (undefined4 *)local_24[2];
      FUN_01443048(*puVar1,puVar1[1]);
      goto LAB_01573650;
    }
  }
  else if ((*local_24 == 0) && (local_24[2] != 0)) {
    puVar1 = (undefined4 *)local_24[1];
LAB_01573650:
    thunk_FUN_01be4678(puVar1);
  }
  thunk_FUN_01be4678(local_24);
LAB_01573660:
  return local_28[0] != '\x06';
}

