// FUN_0184362c @ 0184362c size=508 calls_out=7 calls_in=1
// strings: unsupported register class | _Unwind_VRS_Pop | libunwind: %s - %s  | libunwind: _Unwind_VRS_Pop(context=%p; regclass=%d; discriminator=%d; representation=%d) 

undefined4 FUN_0184362c(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar2 = FUN_01845188();
  if (iVar2 != 0) {
    FUN_016db0c6(&DAT_018db5c0,
                 "libunwind: _Unwind_VRS_Pop(context=%p, regclass=%d, discriminator=%d, representation=%d)\n"
                 ,param_1,param_2,param_3,param_4);
    FUN_016daeb4(&DAT_018db5c0);
  }
  if (param_2 == 1) {
    if (((param_4 & 0xfffffffb) == 1) &&
       (iVar2 = FUN_018430e4(param_1,0,0xd,0,&local_3c), iVar2 == 0)) {
      uVar5 = param_3 >> 0x10;
      uVar4 = uVar5 + (param_3 & 0xffff);
      if (uVar5 < uVar4) {
        do {
          local_34 = local_3c[1];
          local_38 = *local_3c;
          local_3c = local_3c + 2;
          iVar2 = FUN_01842f88(param_1,1,uVar5,param_4,&local_38);
          if (iVar2 != 0) goto LAB_01843692;
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      if (param_4 == 1) {
        local_3c = local_3c + 1;
      }
LAB_01843716:
      uVar3 = FUN_01842f88(param_1,0,0xd,0,&local_3c);
      goto LAB_01843696;
    }
  }
  else if (param_2 == 5) {
    if (param_4 == 0 && param_3 == 0) {
      iVar2 = FUN_018430e4(param_1,0,0xd,0,&local_3c);
      if (iVar2 == 0) {
        local_38 = *local_3c;
        local_3c = local_3c + 1;
        FUN_01842f88(param_1,0,0xd,0,&local_3c);
        uVar3 = FUN_01842f88(param_1,5,0,0,&local_38);
        goto LAB_01843696;
      }
    }
  }
  else {
    if (param_2 != 0) {
      FUN_016db0c6(&DAT_018db5c0,"libunwind: %s - %s\n","_Unwind_VRS_Pop",
                   "unsupported register class");
      FUN_016daeb4(&DAT_018db5c0);
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
    if ((param_4 == 0) && (iVar2 = FUN_018430e4(param_1,0,0xd,0,&local_3c), iVar2 == 0)) {
      uVar4 = 0;
      bVar1 = false;
LAB_018436dc:
      do {
        if ((1 << (uVar4 & 0xff) & param_3) != 0) {
          local_38 = *local_3c;
          if (uVar4 == 0xd) {
            local_3c = local_3c + 1;
            iVar2 = FUN_01842f88(param_1,0,0xd,0,&local_38);
            if (iVar2 != 0) goto LAB_01843692;
            uVar4 = 0xe;
            bVar1 = true;
            goto LAB_018436dc;
          }
          local_3c = local_3c + 1;
          iVar2 = FUN_01842f88(param_1,0,uVar4,0,&local_38);
          if (iVar2 != 0) goto LAB_01843692;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 0x10);
      uVar3 = 0;
      if (bVar1) goto LAB_01843696;
      goto LAB_01843716;
    }
  }
LAB_01843692:
  uVar3 = 2;
LAB_01843696:
  if (DAT_018ddaf8 != local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

