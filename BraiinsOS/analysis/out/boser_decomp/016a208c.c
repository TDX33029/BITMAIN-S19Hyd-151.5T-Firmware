// FUN_016a208c @ 016a208c size=308 calls_out=7 calls_in=0
// strings: 

void FUN_016a208c(int *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  
  if (param_1[0x254] == 2) {
    if ((*param_1 == 2 && param_1[1] == 0) ||
       (iVar4 = FUN_0169e110(param_1,param_2 + 0xd8,param_3,param_4), iVar4 != 0)) {
LAB_016a2188:
      if (*(int *)(param_2 + 0x268) == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d080c4);
      }
      FUN_0168ffb0(param_1[0x2a4],(char)param_1[0x2a9],(int *)(param_2 + 0x268),param_3,param_4);
    }
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x1f1);
    bVar2 = *(byte *)((int)param_1 + 0x7c5);
    cVar3 = *(char *)(param_3 + 0x18);
    local_2c = 0;
    local_3c = 0;
    local_48 = 0;
    local_28 = 0;
    local_34 = 0;
    do {
      iVar4 = FUN_0167d724(param_1 + 0x144,param_3,&local_48);
      if ((iVar4 != 0) ||
         ((((bVar1 & bVar2) & local_48 & 1) != 0 &&
          (iVar4 = FUN_016a9ac8(param_3,&local_48,param_1 + 0x144), iVar4 != 0)))) {
        FUN_016c2dec();
        goto LAB_016a2188;
      }
    } while ((((local_48 & 1) != 0) &&
             (FUN_016cc64c(param_4,local_44), *(int *)(param_4 + 8) != *(int *)(param_4 + 4))) &&
            (cVar3 == '\0'));
  }
  return;
}

