// FUN_0072f260 @ 0072f260 size=612 calls_out=7 calls_in=9
// strings: .debug_ | Invalid  | ELF section name offset

undefined8 FUN_0072f260(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int local_30;
  int *local_2c;
  uint local_28;
  
  iVar1 = FUN_0072f4d4(param_1 + 2,param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_01bed842(".debug_",param_3,7);
    piVar5 = (int *)0x0;
    if (iVar1 == 0) {
      if (*(char *)(param_3 + 7) < -0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(param_3,param_4,7,param_4,&DAT_01c078f0);
      }
      puVar4 = (undefined4 *)param_1[2];
      for (iVar1 = param_1[3] * 0x28; iVar1 != 0; iVar1 = iVar1 + -0x28) {
        uVar7 = FUN_0073238c(param_1 + 4,*puVar4);
        iVar3 = (int)uVar7;
        if ((iVar3 != 0) && (0x7ffffffff < uVar7)) {
          uVar2 = thunk_FUN_01bed842(&DAT_00570828,iVar3,8);
          bVar6 = uVar2 == 0;
          if (bVar6) {
            uVar2 = (int)(uVar7 >> 0x20) - 1;
          }
          if ((bVar6 && uVar2 == param_4) &&
             (iVar3 = thunk_FUN_01bed842(iVar3 + 8,(char *)(param_3 + 7),param_4 - 7), iVar3 == 0))
          {
            FUN_0072dff0(&local_30,puVar4,*param_1,param_1[1]);
            if ((local_30 == 0) &&
               (((7 < local_28 && (*local_2c == 0x42494c5a && local_2c[1] == 0)) && (0xb < local_28)
                ))) {
              uVar2 = local_2c[2];
              uVar8 = FUN_00724cd0(param_2,uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 |
                                           (uVar2 >> 0x10 & 0xff) << 8 | uVar2 >> 0x18);
              param_4 = (uint)((ulonglong)uVar8 >> 0x20);
              iVar1 = FUN_0072f544(local_2c + 3,local_28 - 0xc,(int *)uVar8,param_4);
              piVar5 = (int *)uVar8;
              if (iVar1 != 0) goto LAB_0072f3bc;
            }
            break;
          }
        }
        puVar4 = puVar4 + 10;
      }
      piVar5 = (int *)0x0;
    }
  }
  else {
    FUN_0072dff0(&local_30,iVar1,*param_1,param_1[1]);
    if (local_30 == 0) {
      param_4 = local_28;
      if ((*(byte *)(iVar1 + 9) & 8) == 0) {
        piVar5 = local_2c;
      }
      else {
        piVar5 = (int *)0x0;
        if ((0xb < local_28) && (*local_2c == 1)) {
          uVar8 = FUN_00724cd0(param_2,local_2c[1]);
          param_4 = (uint)((ulonglong)uVar8 >> 0x20);
          iVar1 = FUN_0072f544(local_2c + 3,local_28 - 0xc,(int *)uVar8,param_4);
          piVar5 = (int *)0x0;
          if (iVar1 != 0) {
            piVar5 = (int *)uVar8;
          }
        }
      }
    }
    else {
      piVar5 = (int *)0x0;
    }
  }
LAB_0072f3bc:
  return CONCAT44(param_4,piVar5);
}

