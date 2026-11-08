// FUN_0177b34c @ 0177b34c size=292 calls_out=5 calls_in=3
// strings: 

int FUN_0177b34c(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  char local_2e;
  byte local_2d;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if ((param_2 != (uint *)0x0 && param_1 != (undefined1 *)0x0) &&
     (uVar1 = FUN_0177b1cc(param_1,0x7fff,&PTR_018bc3f4,0), (uVar1 & 1) == 0)) {
    uVar1 = uVar1 >> 1;
    iVar2 = FUN_0177a9c0(uVar1);
    if (iVar2 != 0) {
      if (uVar1 != 0) {
        puVar5 = param_1 + uVar1 * 2;
        pbVar4 = (byte *)(iVar2 + -1);
        do {
          iVar3 = FUN_0177b2b4(&local_2e,*param_1);
          if ((iVar3 == 0) || (iVar3 = FUN_0177b2b4(&local_2d,param_1[1]), iVar3 == 0)) {
            FUN_0177aafc(iVar2);
            goto LAB_0177b41c;
          }
          param_1 = param_1 + 2;
          pbVar4 = pbVar4 + 1;
          *pbVar4 = local_2d | local_2e << 4;
        } while (param_1 != puVar5);
      }
      *param_2 = uVar1;
      goto LAB_0177b420;
    }
  }
LAB_0177b41c:
  iVar2 = 0;
LAB_0177b420:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return iVar2;
}

