// FUN_01acb210 @ 01acb210 size=336 calls_out=4 calls_in=2
// strings: 

void FUN_01acb210(int param_1,char param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 <= param_3) {
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if ((param_3 != 0) && (*(char *)(iVar5 + param_3) < -0x40)) {
    puVar1 = &DAT_01d2fc98;
LAB_01acb354:
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(iVar5,uVar3,param_3,uVar3,puVar1);
  }
  uVar4 = uVar3 - param_3;
  uVar2 = uVar4;
  do {
    uVar6 = FUN_01307268(0x2f,iVar5 + param_3,uVar2);
    uVar2 = (uint)(uVar6 >> 0x20);
    if ((uVar6 & 1) == 0) break;
    if ((uVar2 < uVar4) && (*(char *)(iVar5 + param_3 + uVar2) == '/')) {
      param_3 = param_3 + uVar2 + 1;
      if (param_2 == '\0') {
        if ((param_3 < uVar3) && (*(char *)(iVar5 + param_3) < -0x40)) {
          puVar1 = &DAT_01d2fcb8;
          goto LAB_01acb354;
        }
        if (((uVar3 - param_3 == 2) && ((*(byte *)(iVar5 + param_3) & 0xdf) - 0x41 < 0x1a)) &&
           (((byte *)(iVar5 + param_3))[1] == 0x3a)) {
          return;
        }
      }
      if ((param_3 < uVar3) && (*(char *)(iVar5 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01d2fcc8);
      }
      *(uint *)(param_1 + 8) = param_3;
      return;
    }
  } while (uVar2 <= uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01d2fca8);
}

