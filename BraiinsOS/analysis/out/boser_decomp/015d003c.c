// FUN_015d003c @ 015d003c size=200 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_015d003c(int param_1,int param_2,int *param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 local_2c;
  
  if (param_2 == 0) {
    local_2c = 0x5ac;
  }
  else {
    iVar4 = param_1 + param_2 * 0x18;
    local_2c = 0x5ac;
    do {
      if (param_4 != 0) {
        piVar2 = param_3;
        iVar3 = param_4 * 0x48;
        do {
          iVar1 = piVar2[1];
          if (*piVar2 == 0) {
            iVar1 = 0;
          }
          if (((iVar1 == param_5) && (param_6 == ((char)piVar2[5] == '\x02'))) &&
             (iVar1 = FUN_015d0104(param_1,piVar2), iVar1 != 0)) {
            local_2c = *(undefined4 *)(param_1 + 0x14);
            break;
          }
          piVar2 = piVar2 + 0x12;
          iVar3 = iVar3 + -0x48;
        } while (iVar3 != 0);
      }
      param_1 = param_1 + 0x18;
    } while (param_1 != iVar4);
  }
  return local_2c;
}

