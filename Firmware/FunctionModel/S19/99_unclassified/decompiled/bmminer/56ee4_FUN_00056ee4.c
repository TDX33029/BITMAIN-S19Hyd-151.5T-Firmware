// FUN_00056ee4 @ 00056ee4  size=324  callers=1
// program: bmminer


int * FUN_00056ee4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != (int *)0x0) {
    switch(*param_1) {
    case 0:
      piVar3 = (int *)FUN_00055950();
      if (piVar3 != (int *)0x0) {
        if (*param_1 != 0) {
          return piVar3;
        }
        iVar5 = FUN_000535c4(param_1 + 2);
        while( true ) {
          if (iVar5 == 0) {
            return piVar3;
          }
          uVar2 = FUN_00053654(iVar5);
          FUN_0005365c(iVar5);
          uVar1 = FUN_00056ee4();
          FUN_000565cc(piVar3,uVar2,uVar1);
          if (*param_1 != 0) break;
          iVar5 = FUN_0005363c(param_1 + 2,iVar5);
        }
        return piVar3;
      }
      break;
    case 1:
      piVar3 = (int *)FUN_00055ce0();
      if (piVar3 != (int *)0x0) {
        if (*param_1 != 1) {
          return piVar3;
        }
        uVar4 = param_1[3];
        if (uVar4 == 0) {
          return piVar3;
        }
        uVar7 = 0;
        while( true ) {
          uVar2 = 0;
          if (uVar7 < uVar4) {
            uVar2 = *(undefined4 *)(param_1[4] + uVar7 * 4);
          }
          uVar2 = FUN_00056ee4(uVar2);
          FUN_00056c34(piVar3,uVar2);
          if (*param_1 != 1) break;
          uVar4 = param_1[3];
          uVar7 = uVar7 + 1;
          if (uVar4 <= uVar7) {
            return piVar3;
          }
        }
        return piVar3;
      }
      break;
    case 2:
      piVar3 = (int *)FUN_000558e4(param_1[2],param_1[3],0);
      return piVar3;
    case 3:
      if ((param_1 == (int *)0x0) || (*param_1 != 3)) {
        iVar5 = 0;
        iVar6 = 0;
      }
      else {
        iVar5 = param_1[2];
        iVar6 = param_1[3];
      }
      piVar3 = (int *)FUN_00055024(0x10);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar3[2] = iVar5;
      piVar3[3] = iVar6;
      *piVar3 = 3;
      piVar3[1] = 1;
      return piVar3;
    case 4:
      piVar3 = (int *)FUN_000561b4((int)*(undefined8 *)(param_1 + 2));
      return piVar3;
    case 5:
    case 6:
    case 7:
      return param_1;
    }
  }
  return (int *)0x0;
}

