// FUN_0169e110 @ 0169e110 size=292 calls_out=4 calls_in=4
// strings: 

undefined4 FUN_0169e110(int param_1,int param_2,int param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint local_48;
  uint local_44;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_2c;
  undefined1 local_28;
  
  if (*(int *)(param_2 + 0x170) == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d080a4);
  }
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  cVar1 = *(char *)(param_3 + 0x18);
  iVar6 = *(int *)(param_1 + 0x278);
  iVar2 = *param_4;
  local_2c = 0;
  local_3c = 0;
  local_48 = 0;
  local_28 = 0;
  local_34 = 0;
  while( true ) {
    uVar7 = 0;
    if (*(char *)(iVar6 + 0x15a) == '\x01') {
      uVar7 = (uint)*(byte *)(iVar6 + 0x15b);
    }
    iVar3 = FUN_01687998(param_1,param_2,param_3,&local_48);
    if ((iVar3 != 0) ||
       (((uVar7 & local_48 & 1) != 0 &&
        (iVar3 = FUN_016c30d4(param_3,&local_48,param_1,param_2), iVar3 != 0)))) {
      FUN_016c2dec();
      return 1;
    }
    if ((local_48 & 1) == 0) {
      return 0;
    }
    if ((local_44 < uVar4) && (*(char *)(iVar2 + local_44) == '\0')) {
      uVar5 = uVar5 + 1;
      *(undefined1 *)(iVar2 + local_44) = 1;
      param_4[2] = uVar5;
    }
    if (uVar5 == uVar4) break;
    if (cVar1 != '\0') {
      return 0;
    }
  }
  return 0;
}

