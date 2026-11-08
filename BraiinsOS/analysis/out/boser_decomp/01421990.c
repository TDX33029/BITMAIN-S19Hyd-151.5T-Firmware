// FUN_01421990 @ 01421990 size=104 calls_out=3 calls_in=3
// strings: runtime dropped the dispatch task | user code panicked

undefined4 FUN_01421990(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_01427b74(1,8);
  if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar2 = FUN_0197ac0c(), iVar2 != 0)) {
    uVar4 = 0x21;
    pcVar3 = "runtime dropped the dispatch task";
  }
  else {
    uVar4 = 0x12;
    pcVar3 = "user code panicked";
  }
  FUN_01427c64(uVar1,pcVar3,uVar4);
  return uVar1;
}

