// FUN_015383f4 @ 015383f4 size=152 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_015383f4(undefined4 param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_40 [40];
  
  lVar5 = FUN_0141621c(auStack_40,param_1);
  iVar2 = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = iVar2 + 1;
  uVar4 = 0;
  if (-0x100000001 < lVar5) {
    uVar4 = 1;
    puVar1 = (undefined1 *)FUN_01298504(iVar3,1);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0x2f;
      FUN_01bed4e2(puVar1 + 1,(int)lVar5,iVar2);
      uVar6 = FUN_016bc0ec(puVar1,iVar3);
      FUN_019bb7e0(iVar3,puVar1);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar4,iVar3);
}

