// FUN_00b3820c @ 00b3820c size=160 calls_out=3 calls_in=1
// strings: provided string was not `true` or `false`invalid IPv4 address syntaxinvalid IPv6 address syntaxinvalid socket address syntaxinvalid IPv4 socket address syntaxinvalid IPv6 socket address syntax

void FUN_00b3820c(void)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_30 = &local_40;
  local_38 = 0;
  local_40 = 0;
  local_24 = 0;
  local_3c = 1;
  local_28 = 0x60000020;
  local_2c = &DAT_01c125d0;
  iVar1 = FUN_012fb940(&local_30,
                       "provided string was not `true` or `false`invalid IPv4 address syntaxinvalid IPv6 address syntaxinvalid socket address syntaxinvalid IPv4 socket address syntaxinvalid IPv6 socket address syntax"
                       ,0x29);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_20,&DAT_01c125e8,&DAT_01d30334);
  }
  local_20 = local_40;
  uStack_1c = local_3c;
  uStack_18 = local_38;
  FUN_0189bc00();
  return;
}

