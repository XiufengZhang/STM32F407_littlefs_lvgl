C_SOURCES += list.c
C_SOURCES += queue.c
C_SOURCES += event_groups.c
C_SOURCES += stream_buffer.c
C_SOURCES += tasks.c
C_SOURCES += timers.c
C_SOURCES += croutine.c
C_SOURCES += port.c
C_SOURCES += heap_4.c

DEPPATH += --dep-path $(KERNEL_DIR)
DEPPATH += --dep-path $(KERNEL_DIR)/portable/MemMang
DEPPATH += --dep-path $(KERNEL_DIR)/portable/GCC/ARM_CM4F
# Makefile文件中的特殊变量,作用在在依赖文件上,如果当前目录找不到就到VPATH下去找 
VPATH += :$(KERNEL_DIR)
VPATH += :$(KERNEL_DIR)/portable/MemMang
VPATH += :$(KERNEL_DIR)/portable/GCC/ARM_CM4F

C_INCLUDES += -I$(KERNEL_DIR)/include
C_INCLUDES += -I$(KERNEL_DIR)/portable/GCC/ARM_CM4F