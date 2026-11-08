// FUN_00edd328 @ 00edd328 size=244 calls_out=5 calls_in=1
// strings: 

int FUN_00edd328(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*param_1 == '\0') {
    puVar3 = *(undefined4 **)(param_1 + 4);
    if (param_1[1] != '\x01') {
      FUN_01ac6cbc(*puVar3,",",1);
    }
    uVar2 = *puVar3;
    param_1[1] = '\x02';
    FUN_012650dc(&local_20,uVar2,&DAT_0056fd80,8);
    if ((char)local_20 != '\x04') {
      iVar1 = FUN_01966f50(local_20,uStack_1c);
      return iVar1;
    }
    FUN_01ac6cbc(*puVar3,":",1);
    if (*param_2 == 2 && param_2[1] == 0) {
      FUN_01ac6cbc(*puVar3,&DAT_0056d030,4);
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00edcb58(param_2,puVar3);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
    }
  }
  else {
    local_20 = 10;
    iVar1 = FUN_01966fbc(&local_20,0,0);
  }
  return iVar1;
}

