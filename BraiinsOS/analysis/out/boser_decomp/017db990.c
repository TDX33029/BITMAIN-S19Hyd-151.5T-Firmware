// FUN_017db990 @ 017db990 size=96 calls_out=1 calls_in=1
// strings: Uri should have a scheme

undefined8 FUN_017db990(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*param_1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("Uri should have a scheme",0x18,&DAT_01d1cb0c);
  }
  if (*param_1 == '\x02') {
    return *(undefined8 *)(*(int *)(param_1 + 4) + 4);
  }
  puVar1 = (undefined4 *)&DAT_0053278b;
  if (param_1[1] == '\0') {
    puVar1 = &DAT_0056dc34;
  }
  uVar2 = 4;
  if (param_1[1] != '\0') {
    uVar2 = 5;
  }
  return CONCAT44(uVar2,puVar1);
}

