// FUN_0008f0a0 @ 0008f0a0  size=848  callers=0
// program: bmminer


undefined4 FUN_0008f0a0(int param_1,int param_2)

{
  int *piVar1;
  ssize_t sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_14;
  
  *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = **(undefined4 **)(param_2 + 0x10);
  local_14 = 0;
  while( true ) {
    if (*(int *)(*(int *)(param_1 + 0x1434) + 4) <= local_14) {
      **(undefined1 **)(*(int *)(param_2 + 0x10) + 4) = 0;
      iVar4 = FUN_0008bbbc(*(undefined4 *)(param_1 + 0x1878),param_2);
      if (iVar4 == 0) {
        iVar4 = open64((char *)**(undefined4 **)(param_2 + 0x10),*(uint *)(param_1 + 0x102c) | 0x441
                       ,*(undefined4 *)(param_1 + 0x1028));
        if (iVar4 < 0) {
          uVar5 = **(undefined4 **)(param_2 + 0x10);
          piVar1 = __errno_location();
          FUN_00095b4c(2,"src/rule.c",0xff,"open file[%s] fail, errno[%d]",uVar5,*piVar1);
          uVar5 = 0xffffffff;
        }
        else {
          sVar2 = write(iVar4,(void *)**(undefined4 **)(param_2 + 0x1c),
                        *(int *)(*(int *)(param_2 + 0x1c) + 4) - **(int **)(param_2 + 0x1c));
          if (sVar2 < 0) {
            piVar1 = __errno_location();
            FUN_00095b4c(2,"src/rule.c",0x104,"write fail, errno[%d]",*piVar1);
            close(iVar4);
            uVar5 = 0xffffffff;
          }
          else {
            if ((*(int *)(param_1 + 0x1868) != 0) &&
               (*(int *)(param_1 + 0x186c) = *(int *)(param_1 + 0x186c) + 1,
               *(uint *)(param_1 + 0x1868) <= *(uint *)(param_1 + 0x186c))) {
              *(undefined4 *)(param_1 + 0x186c) = 0;
              iVar3 = fsync(iVar4);
              if (iVar3 != 0) {
                piVar1 = __errno_location();
                FUN_00095b4c(2,"src/rule.c",0x10b,"fsync[%d] fail, errno[%d]",iVar4,*piVar1);
              }
            }
            iVar4 = close(iVar4);
            if (iVar4 < 0) {
              piVar1 = __errno_location();
              FUN_00095b4c(2,"src/rule.c",0x10f,"close fail, maybe cause by write, errno[%d]",
                           *piVar1);
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = 0;
            }
          }
        }
      }
      else {
        FUN_00095b4c(2,"src/rule.c",0xf8,"zlog_format_output fail");
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
    iVar4 = *(int *)(**(int **)(param_1 + 0x1434) + local_14 * 4);
    iVar4 = (**(code **)(iVar4 + 0x242c))(iVar4,param_2);
    if (iVar4 != 0) break;
    local_14 = local_14 + 1;
  }
  FUN_00095b4c(2,"src/rule.c",0xf5,"zlog_spec_gen_path fail");
  return 0xffffffff;
}

