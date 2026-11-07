// FUN_01b70eec @ 01b70eec size=580 calls_out=8 calls_in=4
// strings: /aws-lc/crypto/ube/ube.c

undefined4 FUN_01b70eec(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  int local_38;
  int local_34;
  int local_30;
  int local_24;
  
  local_24 = DAT_01d53560;
  if (param_1 == (uint *)0x0) {
    FUN_01b053d4(0xe,0,0x43,"/aws-lc/crypto/ube/ube.c",199);
  }
  else {
    FUN_01b70810(&DAT_01d53450,FUN_01b70e1c,&PTR_01d3b2b0,0);
    if ((DAT_01d53409 != '\x01') || (DAT_01d53408 == '\x01')) {
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      iVar1 = FUN_01b70ea8(&local_38);
      if (iVar1 == 1) {
        FUN_01b7076c(&DAT_01d5342c);
        uVar2 = DAT_01d533e4;
        uVar3 = 1;
        if ((DAT_01d533ec == local_34 && DAT_01d533e8 == local_38) && (DAT_01d533f0 == local_30)) {
          *param_1 = DAT_01d533e0;
          param_1[1] = uVar2;
          FUN_01b707cc(&DAT_01d5342c);
          goto LAB_01b70f4c;
        }
        FUN_01b707cc(&DAT_01d5342c);
        FUN_01b7079c(&DAT_01d5342c);
        iVar1 = FUN_01b70ea8(&local_38);
        uVar2 = DAT_01d533e4;
        if (iVar1 == 1) {
          if ((DAT_01d533ec == local_34 && DAT_01d533e8 == local_38) && (local_30 == DAT_01d533f0))
          {
            *param_1 = DAT_01d533e0;
            param_1[1] = uVar2;
          }
          else {
            bVar4 = 0xfffffffe < DAT_01d533e0;
            DAT_01d533e0 = DAT_01d533e0 + 1;
            uVar2 = DAT_01d533e4 + bVar4;
            DAT_01d533f0 = local_30;
            DAT_01d533e8 = local_38;
            DAT_01d533ec = local_34;
            DAT_01d533e4 = uVar2;
            *param_1 = DAT_01d533e0;
            param_1[1] = uVar2;
          }
          FUN_01b707fc(&DAT_01d5342c);
          goto LAB_01b70f4c;
        }
        FUN_01b70810(&DAT_01d5344c,&LAB_01b70ccc);
        FUN_01b707fc(&DAT_01d5342c);
      }
      else {
        FUN_01b70810(&DAT_01d5344c,&LAB_01b70ccc);
      }
    }
  }
  uVar3 = 0;
LAB_01b70f4c:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar3;
}

