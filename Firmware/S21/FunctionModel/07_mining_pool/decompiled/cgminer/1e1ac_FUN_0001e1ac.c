// FUN_0001e1ac @ 0001e1ac  size=204  callers=0
// program: cgminer


void FUN_0001e1ac(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char acStack_818 [2052];
  
  puVar1 = calloc(1,0x20);
  if (puVar1 == (undefined4 *)0x0) {
    snprintf(acStack_818,0x800,"Failed to calloc dupdata in %s %s():%d","noncedup.c","dupalloc",0x24
            );
    FUN_0001dd98(3,acStack_818,1);
    FUN_0003c34c(1);
  }
  *puVar1 = param_2;
  uVar2 = FUN_0001cf38("Nonces",0x10,0x400,0,1,"noncedup.c","dupalloc",0x27);
  puVar1[1] = uVar2;
  uVar2 = FUN_0001ce90();
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  puVar1[2] = uVar2;
  return;
}

