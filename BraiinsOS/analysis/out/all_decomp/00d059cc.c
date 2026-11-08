// FUN_00d059cc @ 00d059cc size=560 calls_out=3 calls_in=0
// strings: Hashboard

byte FUN_00d059cc(undefined4 *param_1,int **param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_3c;
  int *local_38;
  int *local_34;
  undefined1 *local_30;
  undefined1 local_29;
  int **local_28;
  undefined4 local_24;
  int *local_20;
  int *local_1c;
  
  piVar7 = (int *)*param_1;
  if (*piVar7 == 1) {
    local_38 = piVar7 + 2;
    uVar1 = (*(code *)param_2[1][3])(*param_2,&DAT_00567a6c,4);
    local_24 = (undefined *)(CONCAT31((int3)((uint)local_24 >> 8),uVar1) & 0xffff00ff);
    local_28 = param_2;
    uVar3 = FUN_00fb2258(&local_28,FUN_00356de8,9,piVar7 + 1,FUN_008e9ca0);
    FUN_00fb2258(uVar3,&DAT_00566fac,4,&local_38,FUN_00d47d08);
    bVar2 = local_24._1_1_ | (byte)local_24;
    if (local_24._1_1_ == 1 && ((uint)local_24 & 1) == 0) {
      if ((*(byte *)((int)local_28 + 10) & 0x80) == 0) {
        piVar7 = *local_28;
        uVar3 = 2;
        pcVar6 = (code *)local_28[1][3];
        pcVar5 = " }";
      }
      else {
        piVar7 = *local_28;
        uVar3 = 1;
        pcVar6 = (code *)local_28[1][3];
        pcVar5 = "}";
      }
      bVar2 = (*pcVar6)(piVar7,pcVar5,uVar3);
      return bVar2 & 1;
    }
  }
  else {
    piVar8 = *param_2;
    piVar9 = param_2[1];
    local_3c = piVar7 + 1;
    pcVar6 = (code *)piVar9[3];
    iVar4 = (*pcVar6)(piVar8,"Hashboard",9);
    bVar2 = 1;
    if (iVar4 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar4 = (*pcVar6)(piVar8,"(",1);
        if ((iVar4 == 0) && (iVar4 = FUN_00cd6d9c(&local_3c,param_2), iVar4 == 0)) {
          piVar8 = *param_2;
          pcVar6 = (code *)param_2[1][3];
LAB_00d05bb0:
          bVar2 = (*pcVar6)(piVar8,&DAT_00418e07,1);
          return bVar2 & 1;
        }
      }
      else {
        iVar4 = (*pcVar6)(piVar8,"(\n",2);
        if (iVar4 == 0) {
          bVar2 = 1;
          local_30 = &local_29;
          local_20 = param_2[2];
          local_1c = param_2[3];
          local_24 = &DAT_01880dc4;
          local_28 = &local_38;
          local_29 = 1;
          local_38 = piVar8;
          local_34 = piVar9;
          iVar4 = FUN_00cd6d9c(&local_3c,&local_28);
          if ((iVar4 == 0) &&
             (iVar4 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2), iVar4 == 0))
          goto LAB_00d05bb0;
        }
      }
    }
  }
  return bVar2 & 1;
}

