// FUN_0157f32c @ 0157f32c size=280 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0157f32c(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)*puVar5;
  uVar1 = *puVar2;
  if (param_1[1] == '\x01') {
    FUN_0157a340(&local_30,uVar1,&DAT_0041950e,1);
  }
  else {
    FUN_0157a340(&local_30,uVar1,&DAT_00414a81,2);
  }
  if ((char)local_30 == '\x04') {
    uVar3 = puVar5[1];
    uVar1 = puVar5[2];
    iVar4 = puVar5[3] + 1;
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) {
        uVar1 = *puVar5;
        param_1[1] = '\x02';
        FUN_0157f904(&local_30,uVar1,param_2,param_3);
        if ((char)local_30 == '\x04') {
          return 0;
        }
        break;
      }
      FUN_0157a340(&local_30,*puVar2,uVar3,uVar1);
    } while ((char)local_30 == '\x04');
  }
  uVar1 = FUN_0157c4a0(local_30,local_2c);
  return uVar1;
}

